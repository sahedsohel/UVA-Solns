#include <stdio.h> // add reversed number
#include <string.h>
#include<iostream>
using namespace std;
char num[410],num1[210],num2[210],num4[210],num5[210],num6[410];
int num3[1070];
int main()
{
    int i,c,k,t,d,j,n,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s %s",num4,num5);
        j=strlen(num4)-1;
        while((num4[j]-48)%10==0)
            j--;
        for(a=0,b=j; b>=0; b--)
            num1[a++]=num4[b];
        num1[a]='\0';
//j=a-1;
        k=strlen(num5)-1;
        while((num5[k]-48)%10==0)
            k--;
        for(a=0,b=k; b>=0; b--)
            num2[a++]=num5[b];
        num2[a]='\0';
//k=a-1;
        c=0;
        n=0;
        while(j>=0 || k>=0 || c==1)
        {
            if(j>=0 && k>=0)
                {num3[n]=((num1[j]-48)+(num2[k]-48)+c)%10;
                c=((num1[j]-48)+(num2[k]-48)+c)/10;}
            else if(j>=0)
                {num3[n]=((num1[j]-48)+c)%10;
                c=((num1[j]-48)+c)/10;}
            else if(k>=0)
                {num3[n]=((num2[k]-48)+c)%10;
                c=((num2[k]-48)+c)/10;}
            else
                {num3[n]=c%10;
                c=c/10;}
            n++;
            j--;
            k--;
        }
        k=0;
        for(i=(n-1); i>=0; i--,k++)
            num[k]=num3[i]+48;
        num[k]='\0';
        k--;
        while((num[k]-48)%10==0)
            k--;
        for(a=0,b=k; b>=0; b--)
            num6[a++]=num[b];
        num6[a]='\0';
//printf("%s\n",num6);
        cout<<num6<<endl;
    }
    return 0;
}
