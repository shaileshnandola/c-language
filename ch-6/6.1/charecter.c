#include<stdio.h>
#include<conio.h>
	main()
	{
		int a,b,c;
		
		printf("enter any charecter:\n");
		scanf("%d %d %d",&a,&b,&c);
		
		if(a>b)
		{
			if(a>c)
			{
				printf("%d is maximum",a);	
			}
			else
			{
				printf("%d is maximum",c);
			}
		}
		else if(b>a)
		{
			if(b>c)
			{
				printf("%d is maximum",b);
			}
			else
			{
				printf("%d is maximum",c);
			}
		}
		else
		{
			printf("invalid condition");
		}
		getch();
	}
		
