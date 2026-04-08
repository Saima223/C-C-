#include <stdio.h>

/*
======================== THEORY ========================

1. Arithmetic Operators:
   +  -  *  /  %  → used for calculations

2. Relational Operators:
   >  <  >=  <=  ==  !=  → return 1 (true) or 0 (false)

3. Logical Operators:
   && (AND), || (OR), ! (NOT)

4. Assignment Operators:
   =  +=  -=  *=  /=  %=

5. Increment/Decrement:
   ++a (pre), a++ (post), --a, a--

6. Ternary Operator:
   (condition) ? value_if_true : value_if_false

7. Operator Precedence (high → low):
   ++ --
   * / %
   + -
   < > <= >=
   == !=
   &&
   ||
   =

8. Integer vs Float Division:
   5/2 = 2 (integer division)
   (float)5/2 = 2.5

========================================================
*/

int main() {

    int a, b, n;

    // ===== INPUT =====
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // ===== ARITHMETIC OPERATIONS =====
    printf("\n--- Arithmetic Operations ---\n");
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);

    // Integer Division
    printf("Division (integer): %d\n", a / b);

    // Float Division
    printf("Division (float): %.2f\n", (float)a / b);

    printf("Modulus: %d\n", a % b);

    // ===== RELATIONAL OPERATORS =====
    printf("\n--- Relational Operations ---\n");
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);

    // ===== LOGICAL OPERATORS =====
    printf("\n--- Logical Operations ---\n");
    printf("(a > 0 && b > 0): %d\n", (a > 0 && b > 0));
    printf("(a > 0 || b < 0): %d\n", (a > 0 || b < 0));
    printf("!(a > b): %d\n", !(a > b));

    // ===== TERNARY OPERATOR =====
    int max = (a > b) ? a : b;
    printf("\nLargest number (ternary): %d\n", max);

    // ===== EVEN / ODD CHECK =====
    printf("\nEnter a number to check even/odd: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("Even Number\n");
    else
        printf("Odd Number\n");

    // ===== INCREMENT / DECREMENT =====
    printf("\n--- Increment / Decrement ---\n");
    int x = 5;
    printf("x = %d\n", x);
    printf("x++ = %d\n", x++); // post-increment
    printf("After x++ → %d\n", x);
    printf("++x = %d\n", ++x); // pre-increment

    // ===== OPERATOR PRECEDENCE =====
    printf("\n--- Operator Precedence ---\n");
    int result1 = 10 + 5 * 2;
    int result2 = (10 + 5) * 2;

    printf("10 + 5 * 2 = %d\n", result1);
    printf("(10 + 5) * 2 = %d\n", result2);

    /*
    NOTE:
    Avoid undefined behavior like:
    printf("%d %d %d", a, a++, ++a);
    */

    return 0;
    /*
    Q: What is implicit casting?
A: Automatic conversion done by compiler. int + float → float automatically. No data loss going to larger type.
Q: What is truncation?
A: When casting float to int, decimal part is dropped. (int)3.9 = 3, not 4.
Q: What does %5.2f mean?
A: Total width 5 characters, 2 decimal places. Used for aligning output in columns.
    */
}