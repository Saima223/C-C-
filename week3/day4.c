#include <stdio.h>
//Multiply two 3×3 matrices

int main()
{
#define R 3
#define C 3
            

   int a[R][C] = {
       {1,2,3},
       {4,5,6},
       {7,8,9}
   };

   printf("a :%d\n", a[2][2]);

   int b[R][C] = {
       {1,2,3},
       {4,5,6},
       {7,8,9}
   };

   int sum[R][C];
   int i, j;

   for (i = 0; i < R; i++)
      for (j = 0; j < C; j++)
         sum[i][j] = a[i][j] + b[i][j];

   /* print sum matrix */
   printf("Sum Matrix: ");
   for (i = 0; i < R; i++)
      for (j = 0; j < C; j++)
         printf("%d ", sum[i][j]);

   /* diagonal sum */
   int diag = 0;
   for (i = 0; i < R; i++){
      printf("i:%d\n", i);
      diag += a[i][i];//diag = diag + 1 => 1 +4 => 5+7 
      printf("after run i %d\n", i);
   }

   printf("\nDiagonal sum = %d\n", diag);

   return 0;
}