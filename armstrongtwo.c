#include <stdio.h>
#include <conio.h>
 
void  main()
{
	int low, high, i, flag, temp;
	printf("Enter two numbers(intevals): ");
	scanf("%d %d", &n1, &n2);
 
	//swapping numbers if low is greater than high
	if (n1 > n2) 
	{
		temp = n1;
		n1 = n2;
		n2 = temp;
	}
 
	printf("Prime numbers between %d and %d are: ", n1, n2);
 
	while (n1 < n2)
	{
		flag = 0;
 
		for(i = 2; i <= n1/2; ++i)
		{
			if(n1% i == 0)
			{
				flag = 1;
				break;
			}
		}
 
		if (flag == 0)
			printf("%d ", n1);
 
		++n1;
	}
	getch();
	
}
