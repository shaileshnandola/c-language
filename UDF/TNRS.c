#include <stdio.h>

int addition()
//TNRN Take Nathing Return Something
{
    int a,b;
    printf("Enter a :");
    scanf("%d", &a);
     printf("Enter b :");
    scanf("%d", &b);

    return a+b;
}
void main()
{
    printf("ANS\t : %d", addition());
}
