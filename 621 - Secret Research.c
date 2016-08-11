#include<stdio.h>
#include<string.h>
int main()
{
    int t,a,b,i,j=1,l;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        char A[10000];
        scanf("%s", A);
        l=strlen(A);
        if(l==1)
        {
            if(A[0]=='1'||A[0]=='4')
                printf("+\n");
        }
        else if(l>=2)
        {
            if(l==2&&A[0]=='7'&&A[1]=='8')
                printf("+\n");
            else if(A[l-2]=='3'&&A[l-1]=='5')
                printf("-\n");
            else if(A[0]=='9'&&A[l-1]=='4')
                printf("*\n");
            else if(l>=3&&A[0]=='1'&&A[1]=='9'&&A[2]=='0')
                printf("?\n");
        }
    }
    return 0;
}

