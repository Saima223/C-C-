#include <stdio.h>

int main() {
    FILE *fp = fopen("std.txt", "r");

    if (fp == NULL) {
        printf("File not found\n");
        return 1;
    }

    char name[20];
    int age;

    while(fscanf(fp, "%s %d", name, &age) != EOF) {
        printf("%s %d\n", name, age);
    }

    fclose(fp);
    return 0;
}