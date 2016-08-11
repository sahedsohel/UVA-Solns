#include<iostream>
using namespace std;
int main()
{
    int i;
    char a[14][10]={"2","7","5","30","169","441","1872","7632","1740","93313","459901","1358657","2504881","4195427"};
    while(1)
    {
        cin>>i;
        if(i==0)break;
        cout<<a[i-1]<<endl;
    }
    return 0;
}

