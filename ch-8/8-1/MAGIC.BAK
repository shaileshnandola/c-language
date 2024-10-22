#include <stdio.h>
#include <conio.h>
 main() {
    int n,mag, rem,sum = 0, mul = 1;
    clrscr();
    printf("Enter a three-digit integer: ");
    scanf("%d", &n);

    mag = n;

    while (mag != 0)
    {
	rem = mag % 10;

	sum += rem;
	mul *= rem;
	mag /= 10;
     }
    if (sum == mul)
	printf("%d is a magic number.", n);
    else
	printf("%d is not a magic number.", n);

    getch();
}