#include<stdio.h>
#include <stdbool.h> // Include header for bool
int main()
{
    /**
          operator
    +  = addition
    -  = substitiotion
    *  = multiplication
    /  = division
    %  =  modulus or mod
    && = and
    || = or
    !  = not
    <  = greater
    >  = less
    <= = equal greater
    >= = equal less
    != = not equal
    == = check condition
    **/

int num1 = 10, num2 = 5;
int sum = num1 + num2; // sum becomes 15
printf("Sum: %d\n", sum);

int num1 = 20, num2 = 7;
int difference = num1 - num2; // difference becomes 13
printf("Difference: %d\n", difference);

int num1 = 3, num2 = 8;
int product = num1 * num2; // product becomes 24
printf("Product: %d\n", product);

int num1 = 12, num2 = 4;
// Integer division results in integer quotient, discarding remainder
int quotient = num1 / num2; // quotient becomes 3
printf("Quotient: %d\n", quotient);

float num1f = 12.0, num2f = 4.0;
// Floating-point division preserves decimal precision
float result = num1f / num2f; // result becomes 3.0
printf("Result (float): %.2f\n", result);

int num1 = 17, num2 = 4;
int remainder = num1 % num2; // remainder becomes 1
printf("Remainder: %d\n", remainder);

bool a = true, b = false;
bool result = a && b; // result becomes false (both must be true)
printf("And result: %d\n", result);

bool a = true, b = false;
bool result = a || b; // result becomes true (at least one must be true)
printf("Or result: %d\n", result);

bool a = true;
bool result = !a; // result becomes false (inverts truth value)
printf("Not result: %d\n", result);

int num1 = 10, num2 = 5;
bool isGreater = num1 > num2; // isGreater becomes true
printf("Greater: %d\n", isGreater);

int num1 = 7, num2 = 12;
bool isLess = num1 < num2; // isLess becomes true
printf("Less: %d\n", isLess);

int num1 = 15, num2 = 15;
bool isGreaterEqual = num1 >= num2; // isGreaterEqual becomes true
printf("Greater Than or Equal: %d\n", isGreaterEqual);

int num1 = 8, num2 = 8;
bool isLessEqual = num1 <= num2; // isLessEqual becomes true
printf("Less Than or Equal: %d\n", isLessEqual);

int num1 = 20, num2 = 20;
bool isEqual = num1 == num2; // isEqual becomes true
printf("Equal: %d\n", isEqual);

int num1 = 30, num2 = 25;
bool isNotEqual = num1 != num2; // isNotEqual becomes true
printf("Not Equal: %d\n", isNotEqual);

    return 0;
}