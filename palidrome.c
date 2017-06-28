#include <stdio.h>
#include<conio.h>
 
void  main()
{
   int n, rev = 0, temp;
   clrscr();
 
   printf("Enter a number to check if it is a palindrome or not\n");
   scanf("%d",&n);
 
   temp = n;
 
   while( temp != 0 )
   {
      rev = rev * 10;
      rev = rev + temp%10;
      temp = temp/10;
   }
 
   if ( n == rev )
      printf("%d is a palindrome number.\n", n);
   else
      printf("%d is not a palindrome number.\n", n);
 getch();
}
