#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int divider(char y[],int p)
{
    int c = 0,i,z;
    z=strlen(y);
    for(i=0; i<z; i++)
    {
        c = ((y[i]-'0') + c * 10)% p;
    }
    if(c == 0)return 0;
    else return 1;
}

int main()
{
    int l=0;
    char s[10000];
    while(scanf("%s",s)!=EOF)
    {
        if(l!=0)printf("\n");
        if(divider(s,4)==0&&divider(s,100)!=0)
        {
            cout<<"This is leap year."<<endl;
            if(divider(s,15)==0)
                cout<<"This is huluculu festival year."<<endl;
            if(divider(s,55)==0)
                cout<<"This is bulukulu festival year."<<endl;
        }
        else if(divider(s,400)==0)
        {
            cout<<"This is leap year."<<endl;
            if(divider(s,15)==0)
                cout<<"This is huluculu festival year."<<endl;
            if(divider(s,55)==0)
                cout<<"This is bulukulu festival year."<<endl;
        }
        else if(divider(s,15)==0)
            cout<<"This is huluculu festival year."<<endl;
        else
            cout<<"This is an ordinary year."<<endl;
        l=1;
    }
    return 0;
}
