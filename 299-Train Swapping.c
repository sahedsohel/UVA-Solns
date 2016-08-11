#include<stdio.h>
int main()
{
    int t,b,a,i,j,k,x,tp;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        x=0;
        scanf("%d",&b);
        int c[b];
        for(j=0;j<b;j++)
        {
            scanf("%d",&c[j]);
        }
        a=b;
        for(j=0; j<b; j++)
            for(k=0; k<a-1; k++)
            {
                if(c[k]>c[k+1]){tp=c[k],c[k]=c[k+1],c[k+1]=tp;x++;}
            }a--;
        printf("Optimal train swapping takes %d swaps.\n",x);
    }
    return 0;
}
