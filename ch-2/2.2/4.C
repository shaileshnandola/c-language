#include <stdio.h>
#include <conio.h>

main()
{
    int p;
    int r;
    int t;

    clrscr();

    printf("Enter the principle ");
    scanf("%d",&p);

    printf("Enter the rate ");
    scanf("%d",&r);

    printf("Enter the time ");
    scanf("%d",&t);

    printf("simple interest %d",p*r*t/100);

    getch();

}