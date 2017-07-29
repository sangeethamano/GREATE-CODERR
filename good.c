#include<stdio.h>
int main()
{
int m,n;
printf("enter the initialnumber");
scanf("%d",&m);
printf("enter the final number");
scanf("%d",&n);
while(m<=n)
{
if(m%2==0)
{
printf("%d",m);
}
m=m+1;
}
}
