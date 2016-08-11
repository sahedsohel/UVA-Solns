#include<stdio.h>
int main()
{
    int t,i,x,m,s;
    while(1)
    {
        scanf("%d",&t);
        if(t==0)break;
        m=0,s=0;
        for(i=0;i<t;i++)
        {
            scanf("%d",&x);
            s=s+x;
            if(s>m)m=s;
            if(s<=0)s=0;
        }
        if(m==0)printf("Losing streak.\n");
        else
        printf("The maximum winning streak is %d.\n",m);
    }
    return 0;
}
/*
5
12 -4
-10 4
9
The maximum winning streak is 13
3
-2 -1 2
The maximum winning streak is 2.
3
4 -2 3
The maximum winning streak is 5.
3
4 -2 6
The maximum winning streak is 8.
*/
