#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    double r,d,v,u;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lf%lf%lf",&d,&v,&u);
        if(u>v&&u>0&&v>0)
        {r=d/sqrt(u*u-v*v)-(d/u);
        printf("Case %d: %.3lf\n",i+1,r);}
        else
        printf("Case %d: can't determine\n",i+1);
    }
    return 0;
}
