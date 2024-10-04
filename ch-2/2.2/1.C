#include <stdio.h>
#include <conio.h>

main()
{
	float pi=3.14;
	int r;

	clrscr();

	printf("Enter of radius of circle ");
	scanf("%d",&r);
	printf("circle %.2f\n",pi*r*r);
	getch();

}
