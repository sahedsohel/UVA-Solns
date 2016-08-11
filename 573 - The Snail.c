#include<stdio.h>
int main()
{
    int i;
    double h,u,d,f,s,v,x;
    while(scanf("%lf%lf%lf%lf",&h,&u,&d,&f)==4)
    {
        if(h==0.0)
        break;
        v=u*f/100.0;
        s=0.0;
        for(i=1;;i++)
        {
            s=s+u;
            if(s>h){x=1;break;}
            else if(s<0.0){x=0;break;}
            s=s-d;
            if(s<0.0){x=0;break;}
            u=u-v;
            if(u<0.0)u=0.0;
        }
        if(x==0)printf("failure on day %d\n",i);
        else if(x==1)printf("success on day %d\n",i);
    }
    return 0;
}
