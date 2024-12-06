#include <stdio.h>

main()
{
    int size;

    printf("enter number of element :");
    scanf("%d", &size);

    int a[size];

    printf("\n\n array input \n\n");
    for (int i = 0; i < size; i++)
    {
        printf("enter element %d", i + 1);
        scanf("%d", &a[i]);

    }

    printf("\n\n");
    printf("array element of lenght %d\n :", size);

}