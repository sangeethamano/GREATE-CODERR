#include <stdio.h>

void main()
{
 int i, N, sum = 0;

 printf("Enter an integer number");
 scanf ("%d", &N);

 for (i=1; i <= N; i++)
 {
  sum = sum + i;
 }

 printf ("Sum of first %dnatural numbers = %dn", N, sum);
}
