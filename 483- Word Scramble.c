#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,k,j;
    char a[500],t;
    while(scanf("%[^\n]",&a)!=EOF)
    {
        getchar();
        j=strlen(a);
        k=0;
        for(i=0;i<j;i++)
        {
            if(a[i]==' '){
            for(l=i-1;l>=k;l--)
            printf("%c",a[l]);
            printf(" ");
            k=i+1;
            }
        }
        for(--i;i>=k;i--)
        printf("%c",a[i]);
        printf("\n");
    }
    return 0;
}
