#include <stdio.h>
#include <conio.h>

#define MAX_SEATS 30
#define MAX_NAME_LENGTH 50

struct booking{
	char name[MAX_NAME_LENGHT];
	int seatno;
	char source[MAX_NAME_LENGHT];
	char destination[MAX_NAME_LENGHT];
};


struct Booking bookings[MAX_SEATS]
	int bookedseats = 0;
	void bookseat(){
		if(bookedseats>=MAX_SEATS){
			printf("no more seats available.")
			return 0;
		}
struct Booking newbooking;	
	printf("enter  name :");
	scanf("%s",&newbooking.name);
	printf("enter seat number :");
	scanf("%s",&newbooking.seatno);
	printf("enter source :");
	scanf("%s",&newbooking.source);
	printf("enter  destination :");
	scanf("%s",&newbooking.destination);
	
	bookings[bookedSeats++]	= newbooking;
	printf("seats booked succseccfully.");

};
main()
{
	int choich;
	do
	{
		printf("mini bus booking system");
		printf("1.book a seat");
		printf("2.view reservations");
		printf("3.edit reservations");
		printf("4.print a ticket");
		printf("5.exit");
		printf("Enter your choich :");
		scanf("%d",&choich);
		
		switch (choich){
			case 1:
				bookseat();
				break;
			case 2:
				view reservations();
				break;
			case 3:
				edit reservations();
				break;
			case 4:
				print a ticket();
				break;
			case 5:
				printf("existing..");
				break;
			default :
				printf("invalide choich..please enter a valid options.")			
		}
	}while(choich!=5);
	
	getch();
}
