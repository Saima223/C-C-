#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    float marks;
};

int main() {
    struct Student s[5];
    int topper = 0;

    // Input
    for(int i = 0; i < 5; i++) {
        printf("Enter details of student %d:\n", i+1);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Find topper
    for(int i = 1; i < 5; i++) {
        if(s[i].marks > s[topper].marks) {
            topper = i;
        }
    }

    printf("\nTopper:\n");
    printf("Name: %s\n", s[topper].name);
    printf("Marks: %.2f\n", s[topper].marks);

    return 0;
    /*
Create struct Book with title, author, price; input and display 3 books

struct Book b[3]; → array of structs
b[i].title → access member
" %[^\n]" → reads full line (fixes %s problem)
    */
}