#include <stdio.h>
#include <conio.h>

main()
{
	int i,j,n=11;

	for(i=11;i<=15;i++)
	{
		for(j=11;j<=i;j++)
		{
			printf("%d ",n);
			n++;
		}
		printf("\n");
	}

}