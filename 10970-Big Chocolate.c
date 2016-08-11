#include<stdio.h>
int main()
{
    int a,b,s,c,d;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(a==0||b==0){printf("0\n");continue;}
        if(a<0||b<0)continue;
        c=a-1;
        d=b-1;
        if(a<0)a=0;
        if(b<0)b=0;
        if(a>b&&b>0)
        {
            s=d+b*c;
        }
        else if(a>b)
        s=c+a*d;
        else if(a>0)
        s=c+a*d;
        else
        s=d+b*c;
        printf("%d\n",s);
    }
    return 0;
}
