#include<stdio.h>
int main()
{
    int a,b,i,j=1,s,sum;
    while(1)
    {
        scanf("%d",&a);
        if(a==0)break;
        int A[a];
        s=0;
        sum=0;
        for(i=0;i<a;i++)
        {
            scanf("%d",&A[i]);
            s=s+A[i];
        }
        s=s/i;
        for(i=0;i<a;i++)
        {
            if(A[i]>s)
            {b=A[i]-s;
            sum=sum+b;}
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",j++,sum);
    }
    return 0;
}
