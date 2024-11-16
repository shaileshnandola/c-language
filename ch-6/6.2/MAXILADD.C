#include <stdio.h>
#include <conio.h>

main()
{
	int first,second,third,foruth;

	printf("enter three number:\n");
	scanf("%d %d %d",&first,&second,&third,foruth);
	if(first>second)
	{	if(first<third)
		{
			if(first > foruth)
			{
				printf("%d is maximum",first);
			}
			else
			{
				printf("%d is maximum",foruth);
			}
		}
		else
		{
			if(third > foruth)
			{
				printf("%d is maximum",third);
			}
			else
			{
				printf("%d is maximum\n",foruth);
			}

		}
	}
	else if(second>third)
	{
			if(second > foruth)
			{
				printf("%d is maximum\n",second);
			}
			else
			{
				printf("%d is maximum\n",foruth);

			}
	}
	else
	{
		printf("%d is maximum",first);
	}

	getch();

}
