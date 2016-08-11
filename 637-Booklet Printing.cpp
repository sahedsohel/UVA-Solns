#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int i,j,l,t;
    while(1)
    {
        cin>>t;
        if(t==0)break;
        j=ceil(t/4.0)*4;
        i=1;
        cout<<"Printing order for "<<t<<" pages:"<<endl;
        l=0;
        while(i<j)
        {
            printf("Sheet %d, front: ",l+1);
            if(j>t)
            {
                cout<<"Blank, ";
                j--;
            }
            else
            {
                cout<<j<<", ";
                j--;
            }
            if(i==0)
                {cout<<"Blank"<<endl;i++;}
            else
            cout<<i++<<endl;

            if(t==1)break;

            printf("Sheet %d, back : ",++l);
            cout<<i++;

            if(j>t)
            {
                cout<<", Blank"<<endl;
                j--;
            }
            else
            {
                cout<<", "<<j<<endl;
                j--;
            }
        }
    }
    return 0;
}

