#include<stdio.h>
int main()
{
    int a,b,c,d,e,s1,s2,s3;
    scanf("%ld",&a);
    int s[a];
    for(b=0;b<a;b++)
    {

        scanf("%ld %ld %ld",&c,&d,&e);
        s1=c+d,s2=d+e,s3=c+e;
        if(c==0||d==0||e==0){printf("case %ld: invalid\n",b+1);}
        else if(c>s2||d>s3||e>s1){printf("case %ld: invalid\n",b+1);}
        else if(c==d&&c==e){printf("case %ld: Equilateral\n",b+1);}
        else if(c!=d&&c!=e&&d!=e){printf("case %ld: Scalene\n",b+1);}
        else{printf("case %ld: Isosceles\n",b+1);}
    }
    return 0;
}
