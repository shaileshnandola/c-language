#include <stdio.h>
#include <conio.h>
main()
{
	int mark;
	char gread;
	clrscr();
	printf("enter your mark\n");
	scanf("%d",&mark);
	(mark>=91&&mark<=100)
		? gread='A'
		: (mark>=81&&mark<=90)
			? gread='B'
			: (mark>=71&&mark<=80)
				? gread='C'
				: (mark>=61&&mark<=70)
					? gread='D'
					: (mark>=51&&mark<=60)
						? gread='E'
						: (gread='F');
	  printf("%c",gread);

	 switch(gread)
	 {
		case 'A':
		printf("\nexcellent work");
		break;
		case 'B':
		printf("\nwell done");
		break;
		case 'C':
		printf("\ngood job");
		break;
		case 'D':
		printf("\nyou passed");
		break;
		case 'E':
		printf("\nyou could better");
		break;
		case 'F':
		printf("\nyou failed");
		break;
		default:
		printf("\ninvalid gread");
	 }
	 if(gread>='A'&&gread<='F')
	 {
		printf("\nyou are eligible for the next level");
	 }
	 else
	 {
		printf("\npleace try again next time");
	 }

	getch();

}