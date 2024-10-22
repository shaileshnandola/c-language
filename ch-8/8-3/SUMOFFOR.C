#include <stdio.h>
#include <conio.h>

main()
{
	int i,sum=0,n;

	clrscr();
		printf("Enter any number:");
		scanf("%d",&n);
		for(i=1;i<=n;i++){
		   sum=sum+i;
		}
		printf("sum %d",sum);
	getch();

}