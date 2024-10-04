#include <stdio.h>
#include <conio.h>

main()
{
	int x,y,a,b;

	clrscr();

	printf("Enter the values of x and y \n");
	scanf("%d%d",&x,&y);
	a=(x+y)*(x+y);
	b=(x*x)+(2*x*y)+(y*y);
	printf("\n LHS=%d",a);
	printf("\n RHS=%d",b);
	getch();


}