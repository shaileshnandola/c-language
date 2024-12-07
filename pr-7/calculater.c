#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtraction(int a, int b)
{
    return a - b;
}

int multiplication(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("not divide by zero....");
        return 0;
    }
}
int moduls(int a, int b)
{
    return a % b;
}
int main()
{
    int a, b;
    int num;
    while (1)
    {
        printf("\n1.Press 1 for +\n 2.Press 2 for - \n 3.Press 3 for * \n 4.Press 4 for / \n 5.Press 5 for %% \n 0.Press 0 for exit\n ");
        printf("Enter your Choice : ");
        scanf("%d", &num);
        if (num == 0)
        {
            break;
        }
        else if (num >= 1 && num <= 5)
        {
            printf("Enter the first number :");
            scanf("%d", &a);
            printf("Enter the second number :");
            scanf("%d", &b);
        }

        switch (num)
        {
        case 1:
            printf("Addition of %d and %d is : %d", a, b, a + b);
            break;
        case 2:
            printf("Subtraction of %d and %d is : %d", a, b, a - b);
            break;
        case 3:
            printf("Multification of %d and %d is : %d", a, b, a * b);
            break;
        case 4:
            printf("Division of Two Numbers is %d : ", a / b);
            break;
        case 5:
            printf("Moduls of Two Numbers is %d : ", a % b);
            break;
        case 0:
            printf(" Enter your choice: 0");
            break;
        default:
            printf(" invalid choice");
            break;
        }
    }
}