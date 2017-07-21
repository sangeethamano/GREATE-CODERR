#include<stdio.h>
#include<stdlib.h>
main()
{
char ch;
printf("Do you want to shutdown your system");
scanf("%c",&ch);
if(ch==Y||ch==y)
system("C:\\WINDOWS\\System32\\shutdown /s");
return 0;
}
