#include <stdio.h>

int main() {
    // Initializing variables
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";

    // 1. Get Age
    printf("Enter Your age: ");
    scanf("%d", &age);

    // 2. Get GPA
    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    // 3. Get Grade
    printf("Enter your grade (A, B, C...): ");
    
    scanf(" %c", &grade);

    // 4. Get Name
    printf("Enter your name: ");
   
    scanf("%s", name);

    printf("\n--- Student Details ---\n");
    printf("Age:   %d\n", age);
    printf("GPA:   %.2f\n", gpa); // %.2f limits output to 2 decimal places
    printf("Grade: %c\n", grade);
    printf("Name:  %s\n", name);

    return 0;
}