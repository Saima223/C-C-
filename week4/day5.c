#include <stdio.h>
#include <string.h>

struct Address {
    char city[20];
    int pin;
};

typedef struct {
    char name[20];
    struct Address addr;
} Student;

union Data {
    int i;
    float f;
    char c;
};

int main() {
    Student s1; //struct student s1 
    strcpy(s1.name, "xyz");
    strcpy(s1.addr.city, "Mumbai");
    s1.addr.pin = 12345;

    printf("%s %s %d\n", s1.name, s1.addr.city, s1.addr.pin);

    union Data d;
    d.i = 10;
    printf("i = %d\n", d.i);

    d.f = 5.5;
    printf("f = %f\n", d.f);

    return 0;
}

/*
Structure = multiple storage boxes
Union = one shared box
Nested struct = grouping inside grouping
typedef = shortcut naming
*/