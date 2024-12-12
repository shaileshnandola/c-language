#include <stdio.h>

int main() {

    FILE *even_file, *odd_file;
    int i;

    even_file = fopen("even_file.txt", "w");
    if (even_file == NULL) {
        printf("Error opening even_file.txt\n");
        return 1;
    }

    odd_file = fopen("odd_file.txt", "w");
    if (odd_file == NULL) {
        printf("Error opening odd_file.txt\n");
        fclose(even_file); 
        return 1;
    }

   
    for (i = 50; i <= 70; i++) {
        if (i % 2 == 0) {
            fprintf(even_file, "%d\n", i); 
        } else {
            fprintf(odd_file, "%d\n", i);  
        }
    }

    fclose(even_file);
    fclose(odd_file);

    printf("Even and odd numbers.\n");

}