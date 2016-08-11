#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    unsigned long long a,b;
    int sum,carry,count;
    while(cin>>a>>b && ((a>0) || (b>0)))
    {
        carry=0;
        sum=0;
        count=0;
        while((a>0) || (b>0))
        {
            sum=carry+(a%10)+(b%10);
            if(sum>=10)
            {
                count++;
            }

            carry=sum/10;
            a/=10;
            b/=10;
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
