#include <stdio.h>
#include <conio.h>
main()
{
	int a,b;

	clrscr();

	printf("Enter the value of a and b\n");
	scanf("%d%d",&a,&b);

	printf("swapping value of a and b : %d %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("swapping value of a and b : %d %d\n",a,b);

	getch();

}