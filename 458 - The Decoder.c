#include<stdio.h>
#include<string.h>
int main()
{
    char c[10000];
    int i,l;
    while(scanf("%[^\n]",c)!=EOF)
    {
        getchar();
        l=strlen(c);
        for(i=0;i<l;i++)
        printf("%c",c[i]-7);
        printf("\n");
    }
    return 0;
}
