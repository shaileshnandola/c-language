#include <stdio.h>
int main() {
    int choice;
    printf("Coffee Shop Order System\n");
    printf("1. Espresso\n");
    printf("2. Latte\n");
    printf("3. Cappuccino\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enjoy your Espresso!\n");
            break;
        case 2:
            printf("Here's your Latte. Enjoy!\n");
            break;
        case 3:
            printf("Cappuccino is ready. Enjoy!\n");
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}
