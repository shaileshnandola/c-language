#include <stdio.h>
#include <conio.h>
 main() {
  int i, rev = 0, rem, pal;
     clrscr();
    printf("Enter an integer: ");
    scanf("%d", &pal);

    for (i=pal;i>0;) {
	rem = i % 10;
	rev = rev * 10 + rem;
	i /=10;
    }
    if (pal == rev)

	printf("%d is a palindrome.", pal);
    else
	printf("%d is not a palindrome.", pal);

    getch();
}