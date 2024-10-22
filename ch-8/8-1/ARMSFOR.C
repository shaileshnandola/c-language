#include <stdio.h>
#include <conio.h>
 main() {
    int n, arm, rem,sum=0;
    clrscr();
    printf("Enter a three-digit integer: ");
    scanf("%d", &n);

    for (arm = n; n!=0;n = n / 10) {

       rem = n % 10;
       sum = sum +(rem*rem*rem);
    }

    if (sum == arm)
	printf("%d is an Armstrong number.", arm);
    else
	printf("%d is not an Armstrong number.", arm);

    getch();
}