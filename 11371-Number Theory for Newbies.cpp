#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    char a[11];
    long long i,j,l,max,min;
    while(scanf("%s",a)!=EOF)
    {
        int c[10]={0};
        for(i=strlen(a)-1;i>-1;i--)
            c[a[i]-48]++;
        max=0;
        for(i=9;i>-1;i--)
        {
            if(c[i]>0)
            {
                for(j=0;j<c[i];j++)
                {
                    max=max*10+i;
                }
            }
        }
        cout<<max<<" - ";
        min=0;
        for(i=1;i<10;i++)
        {
            if(c[i]>0)
            {
                for(j=0;j<c[i];j++)
                {
                    min=min*10+i;
                    if(c[0]>0)
                    {
                        for(l=0;l<c[0];l++)
                            min=min*10;
                        c[0]=0;
                    }
                }
            }
        }
        cout<<min;
        max=max-min;
        cout<<" = "<<max<<" = 9 * "<<max/9<<endl;
    }
    return 0;
}
