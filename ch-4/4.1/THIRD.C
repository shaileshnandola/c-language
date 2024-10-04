#include <stdio.h>
#include <conio.h>
main()
{
	int a,b,c;

	clrscr();

	printf("Enter the value of a and b");
	scanf("%d%d",&a,&b);

	printf("swapping firstvariable =%d \n secondvariable=%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("swapping firstvariable=%d\n secondvariable=%d\n",a,b);
	getch();

}