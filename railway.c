#include<stdio.h>
#include<conio.h>

main(){

     int a,b,c,d,e,f;
     char ch [200];
     long int i;
     
     

     printf("press 1 for Rajdhani Express\n");
     printf("press 2 for Satabdi Express\n");
     printf("press 3 for Humsafar Express\n");
     printf("enter choice : ");
     scanf("%d",&a);

     switch(a)
     {
	case 1:
	     printf("press 1 for Rajdhani Express\n");
	     
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
	     			case 1 :
	     				printf("press 1 for morning\n");
	     				
	     				printf("morning\n");
	     				printf("evening\n");
	     				scanf("%d",&d);
	     				switch(d)
	     				{
	     					case 1 :
							 	printf("press 1 for morning \n");
							 	
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
							 			scanf("%d",&i);
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
	     				case 2 :
	     				printf("press 2 for non A.C BUS\n");
	     				
	     				printf("morning\n");
	     				printf("evening\n");
	     				scanf("%d",&d);
	     			break;	
				 }
	     	break;
	     	case 2:
	     		printf("press 2 for surat to ahmedabad\n");
	     		
	     		printf("A.C BUS\n");
	     		printf("non A.C BUS\n");
	     		scanf("%d",&c);
	     			switch(c)
	     		{
	     			case 1 :
	     				printf("press 1 for A.C BUS\n");
	     				
	     				printf("morning\n");
	     				printf("evening\n");
	     				scanf("%d",&d);
	     			break;
	     				case 2 :
	     				printf("press 2 for non A.C BUS\n");
	     				
	     				printf("morning\n");
	     				printf("evening\n");
	     				scanf("%d",&d);
	     			break;	
				 }
	     	break;
	     		case 3:
	     		printf("press 3 for surat to rajkot\n");
	     		
	     		printf("A.C BUS\n");
	     		printf("non A.C BUS\n");
	     		scanf("%d",&c);
	     			switch(c)
	     		{
	     			case 1 :
	     				printf("press 1 for A.C BUS\n");
	     				
	     				printf("morning\n");
	     				printf("evening\n");
	     				scanf("%d",&d);
	     			break;
	     				case 2 :
	     				printf("press 2 for non A.C BUS\n");
	     				
	     				printf("morning\n");
	     				printf("evening\n");
	     				scanf("%d",&d);
	     			break;	
				 }
	     	break;
		 }
	     
	break;
	case 2:
	     printf("press 2 for RAJDHANI travels\n");
	     
	     printf("surat to bhavnagar\n");
	     printf("surat to ahmedabad\n");
	     printf("surat to rajkot\n");
	     scanf("%d",&b);
	break;
	case 3:
	     printf("press 3 for ALANKAR travels\n");
	     
	     printf("surat to bhavnagar\n");
	     printf("surat to ahmedabad\n");
	     printf("surat to rajkot\n");
	     scanf("%d",&b);
	break;
	default :
	      printf("invalid");
     }

     getch();
}
