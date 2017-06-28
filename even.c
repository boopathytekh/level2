#include <stdio.h>
#include<conio.h>
void main()

{

    int num,m ,n;

    clrscr();
    printf("enter the two intervals");
    scanf(%d%d",&m,&n);
    printf("Print even Numbers in a given range m to n:\n");
    for (num = m; num <= n; num++)
        {
               if (num % 2 == 0)
                  printf ("%d ", num);
         }
                getch();
}
