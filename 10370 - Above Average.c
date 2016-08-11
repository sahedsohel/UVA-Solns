#include<stdio.h>
int main()
{
    int t,n,i;
    double s,x;
    while(1)
    {
        scanf("%d",&t);
        for(;t>0;t--)
        {
            s=0.0;
            scanf("%d",&n);
            int a[n];
            x=0;
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
                s=s*i/(i+1)+(double)a[i]/(i+1);
            }
            for(i=0;i<n;i++)
            if(a[i]>s)x++;
            x=x/n;
            printf("%.3lf%c\n",x*100.0,'%');
        }
    }
    return 0;
}
