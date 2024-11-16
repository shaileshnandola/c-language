#include <stdio.h>
#include <conio.h>

main()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=5;j++)
		{
			if(i%2==0)
			printf("%d\t",j*10);
			else
			{
				if(j%2==0)
				printf("%c\t",j+64);
				
				else{
					printf("%d\t",j);
				}	
			}	
		}
		printf("\n");
	}
}
getch();
