#include<stdio.h>
int main()
{
    long long x=1,t,a,s=0,r,n,l,i=0,j=0,y;
    scanf("%lld",&l);
    for(;i<l;i++)
    {
        y=0;
        scanf("%lld",&n);
        while(n!=s)
        {
            s=0,t=n,a=n,x=1;
            while(t!=0)
            {
                t=t/10;
                if(t<0)t=-t;
                x=x*10;
            }
            x=x/10;
            while(a!=0)
            {
                r=a%10;if(r<0)r=-r;
                a=a/10;if(a<0)a=-a;
                s=s+r*x;
                x=x/10;
            }
            if(n!=s){n=s+n;y++;}
            else{break;}
        }
        printf("%lld %lld\n",y,n);
    }
    return 0;
}
