#include<stdio.h>
 #include<conio.h>
void  main() {
   int num, temp, sum = 0, rem;
   clrscr();
 
   printf("\nEnter number for checking Armstrong : ");
   scanf("%d", &num);
 
   temp = num;
 
   while (num != 0) {
      rem = num % 10;
      sum = sum + (rem * rem * rem);
      num = num / 10;
   }
 
   if (temp == sum)
      printf("%d is Amstrong Number", temp);
   else
      printf("%d is Amstrong Number", temp);
      getch();
 
  
}
