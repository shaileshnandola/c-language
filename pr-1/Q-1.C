#include <stdio.h>
#include <conio.h>

main()
{
	int cel; float fahr;

	clrscr();

	printf("Enter the temperature(c):");
	scanf("%d",&cel);

	fahr=((float)cel*9/5)+32;

	printf("\n temperature in fahranheit is %.1f ",fahr);
	getch();
}