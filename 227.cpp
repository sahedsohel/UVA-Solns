#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n=1,i,j,k,l,x;
    char s[5][5],c;
    while(1)
    {
        for(i=0;i<5;i++){
            gets(s[i]);
            if(s[i][0]=='Z')goto end;
            for(j=0;j<5;j++)
            if(s[i][j]==' '){l=i,k=j;}
        }
        x=0;
        while(1)
        {
            cin>>c;
            if(c=='0'){getchar();break;}
            if(x==0){
            if(c=='A')
            {
                s[l][k]=s[l-1][k];
                s[l-1][k]=' ';
                l--;
            }
            else if(c=='B')
            {
                s[l][k]=s[l+1][k];
                s[l+1][k]=' ';
                l++;
            }
            else if(c=='L')
            {
                s[l][k]=s[l][k-1];
                s[l][k-1]=' ';
                k--;
            }
            else if(c=='R')
            {
                s[l][k]=s[l][k+1];
                s[l][k+1]=' ';
                k++;
            }
            else
            x=1;
            if(l<0||l>4||k<0||k>4)
            x=1;
            }
        }
        if(n!=1)
            printf("\n");
        if(x==1)
        {printf("Puzzle #%d:\nThis puzzle has no final configuration.\n",n++);
            continue;
        }
        printf("Puzzle #%d:\n",n++);
        for(i=0;i<5;i++){
            for(j=0;j<5;j++){
            printf("%c",s[i][j]);
            if(j!=4)printf(" ");
            }
            printf("\n");
        }
    }
    end:
    return 0;
}
