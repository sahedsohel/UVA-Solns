#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
double a,s,d,f,l,g; int u,y;
while(scanf("%lf%lf%­lf%lf",&a,&s,&d,&f)=­=4)
{
l=s*(f/100.0);
if(a==0.0) break;
else
{
g=0.0;
for(y=1;;y++)
{
g=g+s;
if(g>a)
{
u=0; break;
}
if(g<0.0)
{
u=1; break;
}
s=s-l;
if(s<0.0)
{
s=0.0;
}
g=g-d;
if(g<0.0)
{
u=1;
break;
}
}
if(u==1) cout<<"failure";
if(u==0) cout<<"success";
printf(" on day %d\n",y);
}
}
return 0;
}
