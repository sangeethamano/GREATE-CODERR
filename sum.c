#include<stdio.h>
int main(void)
{
int n,i,s=0;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;++i)
s+=i;
printf("s=%d",s);
return 0;
}


