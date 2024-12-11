#include <stdio.h>

main()
{
    int row, col;

    printf("enter row :");
    scanf("%d", &row);
    printf("enter col :");
    scanf("%d", &col);

    printf("\n");

    int a[row][col], b[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter a[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n\n");
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter b[%d][%d]", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n\n");
    }

    int sum[row][col];

    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }

    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
        {
            printf("sum of %d\t", sum[i][j]);
            printf("\n");
        }
}
