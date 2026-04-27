#include <stdio.h>

void fun()
{ // static: Every time → resets
    static int x = 0;
    x++;
    printf("%d\n", x);
}

int main()
{
    int a = 10;
    int *ptr = &a; //*ptr = value at that address

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);

    printf("Pointer value (address): %p\n", ptr);
    printf("Value using pointer: %d\n", *ptr);

    *ptr = 20;
    printf("value of a %d\n", *ptr); // changed via ptr

    int x = 5;
    int *p = &x;

    *p = *p + 10;

    printf("%d\n", x);

    return 0;

    /*
| Variable | Value stored |
| -------- | ------------ |
| a        | 10           |
| ptr      | address of a |
Q. Swap two numbers using pointers


p → address
*p → value
p+1 → next element
*(p+1) → value of next element
p++ → move pointer forward

| Stack        | Heap                 |
| ------------ | -------------------- |
| Fixed size   | Dynamic size         |
| Auto managed | Manual (you control) |
| Faster       | Slightly slower      |

    */
}