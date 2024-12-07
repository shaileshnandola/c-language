#include <stdio.h>
#include <string.h>

void main()
{
    char str[20];
    int freq[20];

    printf("Enter any string : ");
    scanf("%[^\n]", &str);

    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        int feq = 1;

        for (int j = i + 1; j < len; j++)
        {
            if (str[i] == str[j])
            {
                feq++;
                str[j] = '\0';
            }
        }

        if (str[i] != '\0')
            printf("%c => %d\n", str[i], feq);
    }
}
