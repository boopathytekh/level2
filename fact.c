#include <stdio.h>
 void  main()
{
  int c, n, fact = 1;
 clrscr();
  printf("Enter a number to calculate it's factorial\n");
  scanf("%d", &n);
 
  for (c = 1; c <= n; c++)
    fact = fact * c;
 
  printf("Factorial of %d = %d\n", n, fact);
 
  getch();
}
