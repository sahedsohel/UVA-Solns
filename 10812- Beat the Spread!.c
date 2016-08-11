#include<stdio.h>
int main()
{
    int t,i,a,b,c,d;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);
        if(a==0&&b==0)
        {
            printf("%d %d\n",a,b);
            continue;
        }
        c=(a+b);
        d=(a-b);
        if(c%2!=0||d%2!=0)
        {printf("impossible\n");continue;}
        else
        {c=c/2,d=d/2;}
        if(c>d&&a>b)
        printf("%d %d\n",c,d);
        else
        printf("impossible\n");
    }
    return 0;
}
