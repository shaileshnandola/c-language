#include <stdio.h>
#include <conio.h>

main()
{
	int i,j,s;
	
	for(i=1;i<=5;i++)
	{
		for(s=5;s>i;s--)
		printf("-");
		
		for(j=i;j>=1;j--)
			printf("%d",j);

		printf("\n");
	}
	for(i=1;i<=5;i++)
		{
			for(s=1;s<i;s++)
				printf("-");
			for(j=i;j<=5;j++)
			{
				if(i%2==0)
					printf("%d",j);
				else
					printf("%c",j+64);
			}
			printf("\n");
		}
}
getch();
