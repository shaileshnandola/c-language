#include <stdio.h>

main()
{
    int row, cols;

    printf("enter any number : ");
    scanf("%d", &row);
    printf("enter any number : ");
    scanf("%d", &cols);

    int a[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                printf("%d\n", a[i][j]);
            }
            else
            {
                printf("-");
            }
        }
    }
}