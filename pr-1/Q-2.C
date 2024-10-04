#include <stdio.h>
#include <conio.h>

main()
{
	float basic,hra,da,ta,gs;

	clrscr();

	printf("input basic salery \n");
	scanf("%f",&basic);

	hra=basic*(10.00/100.00);
	da=basic*(5.00/100.00);
	ta=basic*(8.00/100.00);

	gs=basic+hra+da+ta;

	printf("gross salary =%.2f\n",gs);

	getch();
}