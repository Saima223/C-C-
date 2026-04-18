// Functions avoid code repetition. Prototype (declaration), definition, call. return sends value back.
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}
int sub(int a, int b){
   return a - b;
}
//void function 
void greet(){
   printf("hey C");
}

int main(){
   int result = add(10, 5);
   int res = sub(20, 10);
   printf("sum of a and b: %d\n", result);
   greet();
   return 0;
}