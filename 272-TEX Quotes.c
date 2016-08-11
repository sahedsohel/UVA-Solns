#include<stdio.h>
#include<string.h>
int main()
{
    int x=0,l,i;
    char c[200],t;
    while(scanf("%s%c",c,&t)!=EOF)
    {
        l=strlen(c);
        for(i=0;i<l;i++)
        {
            if(c[i]=='"'){
            if(x==0){printf("``");x=1;}
            else{printf("''");x=0;}
            }
            else{printf("%c",c[i]);}
        }
        printf("%c",t);
    }
    return 0;
}
