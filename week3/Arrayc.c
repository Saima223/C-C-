#include <stdio.h>

int main()
{
   int marks[5][2] = { 
      {85, 90, 78, 92, 88},
      {15, 10, 8, 12, 18}
   };
    int res = marks[0][0];
   printf("%d\n", marks[1][0]);
   printf("%d", res);
   return 0;
}