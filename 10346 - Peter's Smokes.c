#include<stdio.h>
int main()
{
    int b,a,c,t,s=0;
    for(;;)
    {
        scanf("%d%d",&c,&b);
        if(c>1&&b>1)
        {
            t=c;
            for(;a>0;)
            {
                a=t/b;
                t=t%b;
                t=t+a;
                s=s+a;
            }
            s=s+c;
            printf("%d\n",s);
            s=0;a=1;
        }
    }
    return 0;
}
