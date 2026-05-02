#include <stdio.h>

enum Day {MON=1, TUE, WED};

int main() {
    enum Day today;

    today = WED;

    printf("%d", today);

    return 0;
}