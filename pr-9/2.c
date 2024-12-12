#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    float chem_marks;
    float maths_marks;
    float phy_marks;
    float percentage;
};

int main() {
    struct Student students[5]; 
    int i;
  
    for (i = 0; i < 5; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].roll_no);
        
        getchar(); 

        printf("Enter Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
       
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

       
        printf("Enter Marks in Chemistry: ");
        scanf("%f", &students[i].chem_marks);

        printf("Enter Marks in Mathematics: ");
        scanf("%f", &students[i].maths_marks);

        printf("Enter Marks in Physics: ");
        scanf("%f", &students[i].phy_marks);

        printf("\n\n");
      
        students[i].percentage = (students[i].chem_marks + students[i].maths_marks + students[i].phy_marks) / 3;
    }
  
    printf("\nMark Sheets:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Marks in Chemistry: %.2f\n", students[i].chem_marks);
        printf("Marks in Mathematics: %.2f\n", students[i].maths_marks);
        printf("Marks in Physics: %.2f\n", students[i].phy_marks);
        printf("Percentage: %.2f%%\n", students[i].percentage);
    }
    printf("\n\n");
}