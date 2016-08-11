#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
    int i,l,n,p,s;
    char a[15];
    while(1)
    {
        cin>>a;
        if(a[0]=='-')
            break;
        else if(a[0]=='0'&&a[1]=='x')
        {
            s=0;
            l=strlen(a);
            for(i=2;i<l;i++)
            {
                if(a[i]>58)
                    n=a[i]-55;
                else
                    n=a[i]-48;
                p=l-i-1;
                s+=n*pow(16,p);
            }
            cout<<s<<endl;
        }
        else
        {
            n=0;
            l=strlen(a);
            for(i=0;i<l;i++)
                n=n*10+a[i]-48;
            i=0;
            cout<<"0x";
            if(n==0)
                cout<<"0";
            while(n!=0)
            {
                l=n%16;
                n/=16;
                if(l>9)
                    a[i]=55+l;
                else
                    a[i]=48+l;
                i++;
            }

            while(i--)
            {
                cout<<a[i];
            }
            cout<<endl;
        }
    }
    return 0;
}

