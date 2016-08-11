#include<stdio.h>
#include<string.h>
int main()
{
    char a[31],i,l,x;
    while(scanf("%s",a)!=EOF)
    {
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            x=a[i]-'A';
            if(a[i]=='1'||a[i]=='0'||a[i]=='-')printf("%c",a[i]);
            else if(x<16)printf("%d",x/3+2);
            else if(x>21)printf("%d",9);
            else if(x>18)printf("%d",8);
            else
            printf("%d",7);
        }
        printf("\n");
    }
    return 0;
}
