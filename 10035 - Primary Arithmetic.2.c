#include <stdio.h>
int main()
{
    int a,b,i,j,count=0;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0 && b==0)
        return 0;
        else
        {
            count=0;
            while(a!=0 || b!=0)
            {
                i=a%10;
                a=a/10;
                j=b%10;
                b=b/10;
                if(i+j>=10)
                {
                count++;
                a=a+(i+j)/10;
                }
            }
        }
        if(count==0)
        {
            printf("No carry operation.\n");
        }
        else if(count==1)
        {
            printf("%d carry operation.\n",count);
        }
        else
        {
            printf("%d carry operations.\n",count);
        }
    }
    return 0;
}
