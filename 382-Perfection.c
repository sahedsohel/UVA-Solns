#include<stdio.h>
#include<math.h>
int main()
{
    int n[101],i,j,s,t,k;
    for(i=0;;i++)
    {
        scanf("%d",&n[i]);
        if(n[i]==0)break;
    }
    printf("PERFECTION OUTPUT\n");
    for(j=0;j<i;j++)
    {
        t=n[j];
        t=t/2;s=0;
        for(k=1;k<=t;k++)
        {
            if(n[j]%k==0)
            s+=k;
        }
        if(s==n[j])printf("%5d  PERFECT\n",n[j]);
        if(s<n[j])printf("%5d  DEFICIENT\n",n[j]);
        if(s>n[j])printf("%5d  ABUNDANT\n",n[j]);
    }
    printf("END OF OUTPUT\n");
    return 0;
}
