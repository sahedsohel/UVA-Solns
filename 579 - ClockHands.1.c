#include<stdio.h>
int main()
{
    float e,d,f,a,h,m;
    char c;
    while(scanf("%f%c%f",&h,&c,&m)==3)
    {
        if(h==0&&m==0)
        break;
        e=m/60;
        f=h*5+e*5;
        d=m-f;
        if(d<0){d=-d;}
        a=d*6;
        if(a>180){a=360-a;}
        printf("%.3f\n",a);
    }
    return 0;
}

