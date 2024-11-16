#include <stdio.h>
#include <conio.h>

main()
{       int n=5,x=1;
	int i,j;
	clrscr();
		for(i=0;i<=n;i++)
		{
			for(j=0;j<=i;j++)
			{
				printf("%d",x);
				x++;

			}
			printf("\n");
		}
	getch();
}