#include <stdio.h>
#include <conio.h>
main()
{
	int i,j,n=11;
	char ch='a';
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
			{
				n+=11;
				
				printf("%d\t",n);
				
			}
			else
			{
				printf("%c\t",ch);		
			}
			ch++;
		}
		printf("\n");
	}
	getch();
}
