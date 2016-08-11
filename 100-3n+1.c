#include<stdio.h>
int main()
{
    long long a,i,j,b,x=1,m=0,mx,mn;
    while(scanf("%lld %lld",&i,&j)==2)
    {
    if(i>j){mx=i;mn=j;}else{mx=j;mn=i;}
    for(a=mn;a<=mx;a++)
    {
        if(mx==1){m=1;break;}
        for(b=a;b!=1;)
        {
            if(b%2==0){b=b/2;}
            else{b=b+b+b+1;}
            x=x+1;
        }
        if(x>m){m=x;}else{m=m;}
        x=1;
    }
    printf("%lld %lld %lld\n",i,j,m);
    m=1;
    }
    return 0;
}
