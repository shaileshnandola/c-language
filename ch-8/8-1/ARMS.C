#include <stdio.h>
#include <conio.h>
 main() {
    int n, arm, rem, result = 0;
    clrscr();
    printf("Enter a three-digit integer: ");
    scanf("%d", &n);

    arm = n;

    while (arm != 0) {
	rem = arm % 10;

       result += rem * rem * rem;


       arm /= 10;
    }

    if (result == n)
	printf("%d is an Armstrong number.", n);
    else
	printf("%d is not an Armstrong number.", n);

    getch();
}