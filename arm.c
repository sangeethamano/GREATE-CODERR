#include<stdio.h>
int main()
{
     int n,rem,res,orinum;
    printf("enter the number");
    scanf("%d",&n);
    orinum=n;
    while(orinum!=0)
    {
    rem=orinum%10;
    res=res+rem*rem*rem;
    orinum=orinum/10;
    }
    if(res==n)
    printf("%d armstrong num",n);
    else
    printf("%d not a armstrong num",n);
    return 0;
  }
  
