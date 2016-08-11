#include<stdio.h>
int main()
{
    long int n,m,i,j,l,w,s,c,t;
    while(scanf("%ld %ld",&n,&m)==2)
    {
        if(n==0 && m==0) break;
        s=0;
        if(n>m){t=m,m=n,n=t;}
        for(i=n; i<=m; i++)
        {
            c=0;
            j=i;

            do
            {
                if(j%2==0)
                    j/=2;
                else j=(3*j+1);
                c++;
            }
            while(j!=1);
            if(c>s)
            {
                s=c;
                w=i;
            }
        }

        printf("Between %ld and %ld, %ld generates the longest sequence of %ld values.\n",n,m,w,s);
    }
    return 0;
}
