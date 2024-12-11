#include <stdio.h>

main()
{
    int size1, size2;

    printf("enter any number:");
    scanf("%d %d", &size1, &size2);

    printf("adition   :   %d + %d =%d\n", size1, size2, size1 + size2);
    printf("subtraction : %d - %d =%d\n", size1, size2, size1 - size2);
    printf("multiphication   :  %d * %d =%d\n", size1, size1, size1 * size2);

    if (size2 != 0)
    {
        printf("division %d / %d =%f\n", size1, size2, (float)size1 / size2);
    }
    else
    {
        printf("division : can not divide by zero\n");
    }
}