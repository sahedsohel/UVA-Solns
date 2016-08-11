#include<stdio.h>
#include<math.h>
int main()
{
    int a[40],b[40],c,d,e,f,i;
    while(scanf("%d %d",&c,&d)!=EOF)
    {
        for(i=0; c!=0||d!=0; i++)
        {
            if(c!=0){
            a[i]=c%2;
            c=c/2;
            e=i;
            }
            if(d!=0){
            b[i]=d%2;
            d=d/2;
            f=i;
            }
        }

        if(e>f)
        {
            c=0;
            for(i=0; i<=f; i++)
            {
                a[i]=a[i]+b[i];
                if(a[i]==2)a[i]=0;
            }
            for(i=0; i<=e; i++)
            c=c+a[i]*pow(2,i);
        }
        else
        {
            d=0;
            for(i=0; i<=e; i++)
            {
                b[i]=b[i]+a[i];
                if(b[i]==2)b[i]=0;
            }
            for(i=0; i<=f; i++)
            d=d+b[i]*pow(2,i);
        }
        if(c==0)
        printf("%d\n",d);
        else
        printf("%d\n",c);
    }
    return 0;
}
