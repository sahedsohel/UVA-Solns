#include<stdio.h>
int main()
{
    int t,n,i,j,l;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int r[10]={0};
        for(j=1;j<=n;j++)
        {
            l=j;
            while(l!=0)
            {
                r[l%10]++;
                l/=10;
            }
        }
        for(j=0;;j++)
        {
            printf("%d",r[j]);
            if(j==9)break;
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
