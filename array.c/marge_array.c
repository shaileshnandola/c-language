#include <stdio.h>

main()
{
    int size1, size2;

    printf("Enter array size 1 :");
    scanf("%d", &size1);

    printf("Enter array size 1 :");
    scanf("%d", &size2);

    int a[size1], b[size2];
    int marge[size1 + size2];

    printf("\n\n first array \n\n : ");
    for (int i = 0; i < size1; i++)
    {
        printf("Enter  a[%d]", i);
        scanf("%d", &a[i]);
    }

    printf("\n\n second array \n\n : ");
    for (int i = 0; i < size2; i++)
    {
        printf("Enter b[%d]", i);
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < size1 + size2; i++)
    {
        marge[i] = a[i];
    }
    for (int i = 0; i < size1 + size2; i++)
    {
        marge[size1 + i] = b[i];
    }

   for (int i = 0; i < size1 +  size2; i++)
   {
    printf("%d ",marge[i]);
   }
   
   


}
