#include<stdio.h>
#include<math.h>
int main()
{
    int i,a,b;
    for(i=0;i<201;i++)
    {
        scanf("%d%d",&a,&b);
        if(a==0&&b==0)
        break;
        if(a==0)
        {printf("%d\n\n",-2147483646);continue;}
        if(b==0)
        {printf("%d\n\n",-1);continue;}
        if(sqrt(a)==(int)sqrt(a))
        a=sqrt(a);
        else
        a=sqrt(a)+1;
        b=sqrt(b);
        a=b-a+1;
        printf("%d\n",a);
    }
    return 0;
}
