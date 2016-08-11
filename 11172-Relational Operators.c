#include<stdio.h>
int main()
{
    long long a,b,c,d,i;
    int t;
    scanf("%d",&t);
    char x[t];
    for(a=0;a<t;a++)
    {
        if(t>15)break;
        scanf("%lld %lld",&b,&c);
        {
            if(b==c){x[a]='=';}
            else if(b>c){x[a]='>';}
            else{x[a]='<';}
        }
    }
    for(i=0;i<t;i++){if(t>15)break;printf("%c\n",x[i]);}
    return 0;
}
