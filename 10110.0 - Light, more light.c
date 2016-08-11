#include<stdio.h>
int main()
{
    int i,j,k=0,l,d,r[100],n=6421;
    for(;;){
        if(n>10000)
        break;
        j=0;i=1;
        for(i=1;i<=n;i++)
        {
            if(n%i==0){j=j+1;}
        }
        if(j%2==0){d=0;}
        else{d=1;}
        r[k]=d;
        k=k+1;n=n+557;
    }
    for(l=0;l<k;l++)
    {
        if(r[l]==1){printf("\nyes");}
        else{printf("\nno");}
    }
    return 0;
}
