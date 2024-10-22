#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,f=1;
    clrscr();
     
    printf("\n Enter The Number:");
    scanf("%d",&n);
     
    //LOOP TO CALCULATE FACTORIAL OF A NUMBER
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
     
    printf("\n The Factorial of %d is %d",n,f);
    getch();
}