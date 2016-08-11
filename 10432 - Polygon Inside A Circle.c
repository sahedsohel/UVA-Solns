#include<stdio.h>
#include<math.h>
int main()
{
    double a,s,r,pi=acos(-1.0);
    int n;
    while(scanf("%lf%d",&r,&n)==2)
    {
        s=0.5*(double)n*r*r*sin(2*pi/(double)n);
        printf("%.3lf\n",s);
    }
    return 0;
}
