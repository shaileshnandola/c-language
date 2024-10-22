#include <stdio.h>
#include <conio.h>
 main() {
  int n, rev = 0, rem, pal;
     clrscr();
    printf("Enter an integer: ");
    scanf("%d", &n);
    pal = n;

    while (n != 0) {
	rem = n % 10;
	rev = rev * 10 + rem;
	n /= 10;
    }
    if (pal == rev)

	printf("%d is a palindrome.", pal);
    else
	printf("%d is not a palindrome.", pal);

    getch();
}