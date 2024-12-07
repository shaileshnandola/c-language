#include <stdio.h>

int main()
{
    char s[50];
    int i;

    printf("Enter a String : ");
    gets(s);

    char *p = s;

    for (i = 0; *(p + i) != '\0'; i++);

    printf("\nLength = %d", i);
}