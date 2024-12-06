#include <stdio.h>

void sum(int a,int b);
//TNRN Take Somthing Return Nathing
void main()
{
    int x,y;
    printf("Enter first and second no :");
    scanf("%d %d ", &x,&y);

    sum(x,y);
}
void sum (int a,int b)
{
    printf("%d + %d = %d\n\n", a,b,a+b);
}