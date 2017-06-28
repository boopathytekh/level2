#include<stdio.h>
#include<conio.h>
void main()
{
int b,e,i;
int power=1;
clrscr();
printf("enter the base");
scanf("%d",&b);
printf("enter the exponent");
scanf("%d",&e);
for(i=e;e!=0;e--)
{
power=power*b;
}
printf("the power of =%d",power);
getch();
}
