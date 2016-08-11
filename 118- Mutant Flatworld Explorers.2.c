#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,u,r,a,b,x,k,l;
    scanf("%d %d",&r,&u);
    int p[(r+u)*2][2];
    char s,f[100];
    k=0;
    while(scanf("%d %d %c %s",&a,&b,&s,f)!=EOF)
    {
        if(s=='N')x=2;
        else if(s=='E')x=3;
        else if(s=='W')x=1;
        else if(s=='S')x=4;
        for(j=0; j<strlen(f); j++)
        {
            if(f[j]=='L')x--;
            else if(f[j]=='R')x++;
            if(x==0)x=4;
            else if(x==5)x=1;
            if(f[j]=='F')
            {
                if(x==1)a--;
                else if(x==2)b++;
                else if(x==3)a++;
                else if(x==4)
                    b--;
                for(l=0; l<k; l++)
                {
                    if(p[l][0]==a&&p[l][1]==b)
                    {
                        if(a<0)a++;
                        else if(a>r)a--;
                        else if(b<0)b++;
                        else if(b>u)b--;
                    }
                }
                if(a>r||a<0)
                {
                    if(x==2)s='N';
                    else if(x==3)s='E';
                    else if(x==1)s='W';
                    else if(x==4)s='S';
                    p[k][0]=a,p[k][1]=b;
                    k++;
                    if(a<0)a++;
                    else
                        a--;
                    printf("%d %d %c LOST\n",a,b,s);
                    if(b==0)
                    {
                        p[k][0]=a,p[k][1]=b-1;
                        k++;
                    }
                    else if(b==u)
                    {
                        p[k][0]=a,p[k][1]=b+1;
                        k++;
                    }
                    goto last;
                }
                else if(b>u||b<0)
                {
                    if(x==2)s='N';
                    else if(x==3)s='E';
                    else if(x==1)s='W';
                    else if(x==4)s='S';
                    p[k][0]=a,p[k][1]=b;
                    k++;
                    if(b<0)b++;
                    else
                        b--;
                    printf("%d %d %c LOST\n",a,b,s);
                    if(a==0)
                    {
                        p[k][0]=a-1,p[k][1]=b;
                        k++;
                    }
                    else if(a==r)
                    {
                        p[k][0]=a+1,p[k][1]=b;
                        k++;
                    }
                    goto last;
                }
            }
        }
        if(x==2)s='N';
        else if(x==3)s='E';
        else if(x==1)s='W';
        else if(x==4)s='S';
        printf("%d %d %c\n",a,b,s);
last:
        ;
    }
    return 0;
}
