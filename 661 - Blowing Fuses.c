#include<stdio.h>
int main()
{
    int n,m,c,i,max,x,j=0,s;
    while(1)
    {
        scanf("%d%d%d",&n,&m,&c);
        if(n==0&&m==0&&c==0)
        break;
        s=0,max=0,j++;
        int l[n][2];
        for(i=0;i<n;i++){
        scanf("%d",&l[i][0]);
        l[i][1]=0;
        }
        for(i=0;i<m;i++)
        {
            scanf("%d",&x);
            if(l[x-1][0]!=l[x-1][1])
            {
                l[x-1][1]=l[x-1][0];
                s=s+l[x-1][0];
                if(s>max)
                max=s;
            }
            else
            {
                l[x-1][1]=0;
                s=s-l[x-1][0];
            }
        }
        if(max>c)
        printf("Sequence %d\nFuse was blown.\n\n",j);
        else if(max<=c)
        printf("Sequence %d\nFuse was not blown.\nMaximal power consumption was %d amperes.\n\n",j,max);
    }
    return 0;
}
