#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d;
    while(scanf("%lf",&a)!=EOF)
    {
        d=a*a*(1-(acos(-1.0)/6+sqrt(3)/4));
        c=a*a*(1-acos(-1.0)/4)-d*2;
        b=a*a-4.0*(d+c);
        printf("%.3lf %.3lf %.3lf\n",b,c*4.0,d*4.0);
    }
    return 0;
}
