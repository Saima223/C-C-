#include <stdio.h>

#define PI 3.14

int main() {cons
   //get user data and print it 
   int age;
    float height;
    double salary;
    char grade;
    char name[50];

    //use t and check if student pass or not
    const int PASS = 35;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter height: ");
    scanf("%f", &height);

    printf("Enter salary: ");
    scanf("%lf", &salary);

    printf("Enter grade: ");
    scanf(" %c", &grade);

    printf("\n--- User Data ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Salary: %.2lf\n", salary);
    printf("Grade: %c\n", grade);

    int marks;
    printf("\nEnter marks: ");
    scanf("%d", &marks);

    if (marks >= PASS)
        printf("Result: Pass\n");
    else
        printf("Result: Fail\n");

    float r;
    printf("\nEnter radius: ");
    scanf("%f", &r);

    printf("Circle Area = %.2f\n", PI * r * r);

    //3. Escape Sequences (Important for output)
    printf("Name\tAge\nSaima\t21");
    return 0;
}