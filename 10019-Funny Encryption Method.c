#include<stdio.h>
int main()
{
    int t,n,s,x,p,hx[]={0,1,1,2,1,2,2,3,1,2};
    scanf("%d",&t);
    for(;t>0;t--)
    {
        scanf("%d",&n);
        p=n;s=0;
        while(p!=0)
        {
            x=p%2;
            p/=2;
            if(x==1)s++;
        }
        printf("%d ",s);
        s=0;
        while(n!=0)
        {
            x=n%10;
            n/=10;
            s+=hx[x];
        }
        printf("%d\n",s);
    }
    return 0;
}
