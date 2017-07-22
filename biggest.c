#include<stdio.h>
int main(void)
{
int a,b,c;
printf("enter the number");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
printf("a is big");
else if(b>c)
printf("b is big");
else
printf("c is big");
return 0;
}
