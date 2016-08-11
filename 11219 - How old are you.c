#include<stdio.h>
int main()
{
    int d1,m1,y1,d2,m2,y2,t,i;
    char c1,c2,c3,c4;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d/%d/%d\n%d/%d/%d",&d1,&m1,&y1,&d2,&m2,&y2);
        if(m1==m2)
        {
            if(d1>d2)
            y1=y1-y2;
            else
            y1=y1-y2-1;
        }
        else if(m1>m2)
        y1=y1-y2;
        else
        y1=y1-y2-1;
        if(y1<0)
        printf("Case #%d: Invalid birth date\n",i);
        else if(y1>130)
        printf("Case #%d: Check birth date\n",i);
        else
        printf("Case #%d: %d\n",i,y1);
    }
    return 0;
}
