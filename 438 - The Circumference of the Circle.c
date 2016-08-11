#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,e,f,h1,h2,h3,s,pi=3.141592653589793;
    for(;scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)==6;)
    {
        h1=sqrt((a-c)*(a-c)+(b-d)*(b-d));
        h2=sqrt((a-e)*(a-e)+(b-f)*(b-f));
        h3=sqrt((e-c)*(e-c)+(f-d)*(f-d));
        s=(h1+h2+h3)/2;
        s=sqrt(s*(s-h1)*(s-h2)*(s-h3));
        s=(h1*h2*h3)/(4*s);
        s=2*pi*s;
        printf("%.2lf\n",s);
    }
    return 0;
}
