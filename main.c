 #include <stdio.h>

int main(){

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = " ";

    printf("Enter Your age: ");
    scanf("%d\n", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);
    
    


    printf("%d\n", age);
    printf("%f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);




    return 0;
}