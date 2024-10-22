#include <stdio.h>
#include <conio.h>
 main()
{
	int a,b,c,d,e,f;
    char ch [300];
    long int i;
	
	 
		printf("\n====================================================================");
		printf("\n");	
		printf("\t railway Ticket booking ");
		printf("\n");
		printf("\n====================================================================");
	
	printf("press 1 for Rajdhani Express...\n");
    printf("press 2 for Satabdi Express...\n");
    printf("press 3 for Humsafar Express...\n");
    scanf("%d", &a);
     
   	switch(a)
   		{
   			case 1:
   				printf("press 1 for Rajdhani Express...\n");
	     
	    	 		printf("NEW DELHI\n");
	    			printf("Mumbai\n");
	    	 		printf("Chandigarh\n");
	     			scanf("%d",&b);
		switch(b)
	    {
	     	case 1:
	     		printf("press 1 for NEW DELHI\n");
	     		
	     		printf("morning\n");
	     		printf("evening\n");
	     		scanf("%d",&c);
	     	switch(c)
			 {
			 	case 1:
	     		printf("press 1 for morning\n");
	     		
	     		printf("8.30 PM\n");
				printf("9.30 PM\n");
				printf("10.30 PM\n");
				scanf("%d",&e);
			switch(e)
			 {
			 		case 1 :
						printf("press 1 for 8.30 PM \n");
							 	
						printf("enter your name : \n");
						scanf("%c",&ch);
						printf("enter your phone number : \n");
						scanf("%ld",&i);
					break;
								case 2 :
							 			printf("press 2 for 9.30 PM \n");
							 	
							 			printf("enter your name : \n");
							 			scanf("%c",&ch);
							 			printf("enter your phone number : \n");
							 			scanf("%ld",&i);
									break;
										case 3 :
							 			printf("press 1 for 10.30 PM \n");
							 	
							 			printf("enter your name : ");
							 			scanf("%c",&ch);
							 			printf("enter your phone number : ");
							 			scanf("%ld",&i);
									break;
								 }
							break;
								case 2 :
							 	printf("press 2 for evening \n");
							 	
							 	printf("6.30 PM\n");
							 	printf("7.30 PM\n");
							 	printf("8.30 PM\n");
							 	scanf("%d",&e);
							 	switch(e)
							 	{
							 		case 1 :
							 			printf("press 1 for 6.30 PM \n");
							 	
							 			printf("enter your name : \n");
							 			scanf("%c",&ch);
							 			printf("enter your phone number : \n");
							 			scanf("%ld",&i);
									break;
									case 2 :
							 			printf("press 2 for 7.30 PM \n");
							 	
							 			printf("enter your name : \n");
							 			scanf("%c",&ch);
							 			printf("enter your phone number : \n");
							 			scanf("%ld",&i);
									break;
										case 3 :
							 			printf("press 1 for 8.30 PM \n");
							 	
							 			printf("enter your name : \n");
							 			scanf("%c",&ch);
							 			printf("enter your phone number : \n");
							 			scanf("%ld",&i);
									break;
								 }
							break;
						 } 
	     			break;
			}
		}

}
