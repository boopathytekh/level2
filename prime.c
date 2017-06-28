include<stdio.h>
#include<conio.h>
 
void  main()
{
   int n,  c;
 
   printf("Enter the prime number");
   scanf("%d",&n);
 
   if ( n >= 1 )
   
  
      for ( c = 2 ; c <= n - 1 ; c++ )
      {
         if ( n%c == 0 )
            {
            printf("prime number");
            }
            else
            {
            printf("not prime");
            }
            
   }
 
 getch();
}
