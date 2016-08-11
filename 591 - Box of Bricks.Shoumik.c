#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int ar[100],a,b,c,f,i,j=­1;
    while(scanf("%d",&a)­==1 && a!=0)
    {
        b=0;
        f=0;
        for(i=0; i<a; i++)
            scanf("%d",&ar[i]);
        for(i=0; i<a; i++)
            b=b+ar[i];
        c=b/a;
        for(i=0; i<a; i++)
            if(ar[i]>c)
                f=f+(ar[i]-c);
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",j,f);
        j++;
    }

    return 0;

}

