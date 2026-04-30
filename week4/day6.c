#include <stdio.h>

int main()
{
   FILE *fp = fopen("data.txt", "w");
   fprintf(fp, "%s %d\n", "Nitin", 20);
   fclose(fp);

   // read back
   fp = fopen("data.txt", "r");
   char name[20];
   int age;
   fscanf(fp, "%s %d", name, &age);
   printf("%s %d", name, age);
   fclose(fp);

   return 0;
}