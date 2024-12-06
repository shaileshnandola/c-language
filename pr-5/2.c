#include <stdio.h>

main()
{
    int i, j, m, n;
    int a[10][10], lg;

    printf("Enter any two size:\n"); 
    scanf("%d%d", &m, &n);
    printf("Enter any elements:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    lg = a[0][0];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] > lg)
            {
                lg = a[i][j];
            }
        }
    }
    printf("Largest = %d\n", lg);
}
