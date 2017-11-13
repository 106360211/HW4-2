#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void main()
{
	int pass, i, hold, x = 1;
	int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	int break_control = 0;

	puts("Data items in original order");
	for (i = 0; i < SIZE; ++i)
	{
		printf("%4d", a[i]);
	}

	
		for (pass = 1; pass < SIZE; ++pass)
		{
			for (i = 0; i < SIZE - x; ++i)
			{
				break_control = 0;
				if (a[i]>a[i + 1])
				{   
					break_control = 1;
					hold = a[i];
					a[i] = a[i + 1];
					a[i + 1] = hold;
				}
			}
			if (break_control == 0)
			{
				break;
			}
			printf("\n\nLoop %d : ", pass);
			for (i = 0; i < SIZE; i++)
			{
				printf("%4d", a[i]);
			}
			printf("\n");
			x += 1;

		}

		

	puts("\nData items in ascending order");

	for (i = 0; i < SIZE; ++i)
	{
		printf("%4d", a[i]);
	}

	puts("");
	system("pause");
}
