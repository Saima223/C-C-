#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a;

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);

    printf("Pointer value (address): %p\n", ptr);
    printf("Value using pointer: %d\n", *ptr);

    *ptr = 20; 
    printf("value of a %d", a); //changed via ptr

    return 0;
    /*
| Variable | Value stored |
| -------- | ------------ |
| a        | 10           |
| ptr      | address of a |
    */
}