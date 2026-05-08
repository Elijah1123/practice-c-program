#include <stdio.h>
#include <string.h>

int main() {
    // Initializing variables
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[50] = "";

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
    getchar();
    printf("Enter your name: ");
   
    fgets(name, sizeof(name), stdin);

    name[strlen(name) -1] = '\0';

    // printf("\n--- Student Details ---\n");
    printf("Name:  %s\n", name);
    printf("Age:   %d\n", age);
    printf("GPA:   %.2f\n", gpa); // %.2f limits output to 2 decimal places
    printf("Grade: %c\n", grade);
    

    return 0;
}