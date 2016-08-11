#include<stdio.h>
int main()
{
    long a,r;
    while(1)
    {
        scanf("%ld",&a);
        if(a==0)
        break;
        if(a<101){r=91;}
        else{r=a-10;}
        printf("f91(%ld) = %ld\n",a,r);
    }
    return 0;
}
