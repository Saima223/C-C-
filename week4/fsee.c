#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "w+");

    fputs("ABCDEFGH", fp);

    fseek(fp, 3, SEEK_SET);   

    char ch = fgetc(fp);
    printf("%c", ch);   

    fclose(fp);
    return 0;
}