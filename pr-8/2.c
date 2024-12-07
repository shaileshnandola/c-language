#include <stdio.h>

void findCubes(int *array, int rows, int cols, int *result)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            *(result + i * cols + j) = *(array + i * cols + j) * *(array + i * cols + j) * *(array + i * cols + j);
        }
    }
}

void main()
{
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int array[rows][cols], result[rows][cols];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf(" a[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    findCubes((int *)array, rows, cols, (int *)result);

    printf("\nCubes of the elements in the array:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", result[i][j]);
            
        }
        printf("\n");
    }
}