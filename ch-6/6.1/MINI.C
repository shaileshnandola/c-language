#include <stdio.h>
#include <conio.h>

main()
{
	int n1,n2;
	clrscr();

	printf("enter first number :");
	scanf("%d",&n1);

	printf("enter second number :");
	scanf("%d",&n2);

	if(n1<n2)
	{
		printf("%d is minimum :",n1);
	}
	else
	{
		printf("%d is minimum :",n2);
	}
	getch();
}