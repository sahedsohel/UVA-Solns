#include<stdio.h>
int main()
{
    int n,i,a,l,x,j=1;;
    while(1)
    {
        scanf("%d %d",&a,&l);
        if(a<0&&l<0)break;
        else if(a<0||l<0)continue;
        n=a,x=0;
        while(n!=1&&n<=l)
        {
            if(n%2==0)n=n/2;
            else
                n=3*n+1;
            x++;
        }
        printf("Case %d: A = %d, limit = %d, number of terms = %d\n",j,a,l,x+1);
        j++;
    }
    return 0;
}
