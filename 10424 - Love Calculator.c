#include<stdio.h>
#include<string.h>
int main()
{
    char a[26],b[26];
    int i,c,d,s,s1,t,t1;
    double r;
    while(1)
    {
        gets(a);
        gets(b);
        c=strlen(a);
        d=strlen(b);
        s=0;t=0;
        for(i=0;i<c;i++)
        {
            if(a[i]>='a'&&a[i]<='z')
            s=s+a[i]-'a'+1;
            else if(a[i]>='A'&&a[i]<='Z')
            s=s+a[i]-'A'+1;
        }
        for(i=0;i<d;i++)
        {
            if(b[i]>='a'&&b[i]<='z')
            t=t+b[i]-'a'+1;
            else if(b[i]>='A'&&b[i]<='Z')
            t=t+b[i]-'A'+1;
        }
        while(s>9)
        {
            s1=0;
            while(s!=0){
            c=s%10;
            s1=s1+c;
            s=s/10;
            }
            s=s1;
        }
        while(t>9)
        {
            t1=0;
            while(t!=0){
            d=t%10;
            t1=t1+d;
            t=t/10;
            }
            t=t1;
        }
        if(s>t)
        r=(double)t/s*100.0;
        else
        r=(double)s/t*100.0;
        printf("%.2lf%c\n",r,'%');
    }
    return 0;
}
