#include <stdio.h>

main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) /sizeof(a[0]);

    int *ptr = a;

    for (int i = 0; i < n; i++)
    {
        *(ptr + i) = *(ptr + i) * *(ptr + i) * *(ptr + i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d : ",*(ptr + i));
    }
}