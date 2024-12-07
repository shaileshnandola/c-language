#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;
    int condition = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    len = strlen(str);

    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            condition = 1;
            break;
        }
    }

    if(condition == 1) {
        printf("%s is not a palindrome.\n", str);
    } else {
        printf("%s is a palindrome.\n", str);
    }
}
