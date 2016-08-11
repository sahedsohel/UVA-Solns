#include<stdio.h>
int main()
{
    long long a,i,j,b,x=0,m=0,mx,mn,l;
    while(scanf("%lld %lld",&i,&j)==2)
    {
    if(i==0&&j==0)break;
    if(i>j){mx=i;mn=j;}else{mx=j;mn=i;}
    if(mx==1)continue;
    for(a=mn;a<=mx;a++)
    {

        if(a==0)continue;
        x=0;b=a;
        do
        {
            if(b%2==0){b=b/2;}
            else{b=b+b+b+1;}
            x=x+1;
        }while(b!=1);
        if(x>m){m=x;l=a;}else{m=m;}
    }
    printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",mn,mx,l,m);
    m=0;
    }
    return 0;
}
