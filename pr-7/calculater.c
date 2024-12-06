#include <stdio.h>

int main()
{
    int a, b;
    int op;
    printf(" 1.Press 1 for +\n 2.Press 2 for - \n 3.Press 3 for * \n 4.Press 4 for / \n 5.Press 5 for %% \n 0.Press 0 for exit\n ");
    printf("Enter your Choice : ");
    scanf("%d", &op);
    printf("Enter the first number :");
    scanf("%d", &a);
    printf("Enter the second number :");
    scanf("%d", &b);

    switch (op)
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
    default:
        printf(" Enter your choice: 0");
        break;
    }
    return 0;
}