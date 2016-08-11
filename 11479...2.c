#include<stdio.h>
int main()
{
    long a,b,s1,s2,s3;
    scanf("%ld",&a);
    long c[a],d[a],e[a];
    for(b=0;b<a;b++)
    {
        scanf("%ld %ld %ld",&c[b],&d[b],&e[b]);
        if(c[b]<0)c[b]=-c[b];
        if(d[b]<0)d[b]=-d[b];
        if(e[b]<0)e[b]=-e[b];
    }
    b=0;
    for(b=0;b<a;b++)
    {
        if(c[b]==0||d[b]==0||e[b]==0){printf("case %ld: invalid\n",b+1);}
        else if(c[b]==d[b]&&c[b]==e[b]){printf("case %ld: Equilateral\n",b+1);}
        else
        {
            s1=c[b]+d[b],s2=d[b]+e[b],s3=c[b]+e[b];
            if(c[b]>s2||d[b]>s3||e[b]>s1){printf("case %ld: invalid\n",b+1);}
            else if(c[b]!=d[b]&&c[b]!=e[b]&&d[b]!=e[b]){printf("case %ld: Scalene\n",b+1);}
            else{printf("case %ld: Isosceles\n",b+1);}
        }
    }
    return 0;
}
