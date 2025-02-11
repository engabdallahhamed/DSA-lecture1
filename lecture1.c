#include <stdio.h>  // Header file for input-output functions

int main() {
    // Primitive Data Type Variables
    int a = 10, b = 5;
    float c = 5.5, d = 2.2;
    char ch = 'A';

    // Arithmetic Operators
    printf("Arithmetic Operations:\n");
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);  // Integer division
    printf("Modulus: %d\n", a % b);
    printf("Floating Point Division: %.2f\n\n", c / d);

    // Relational Operators
    printf("Relational Operations:\n");
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n\n", a != b);

    // Logical Operators
    printf("Logical Operations:\n");
    printf("(a > b) && (b > 0): %d\n", (a > b) && (b > 0));
    printf("(a < b) || (b > 0): %d\n", (a < b) || (b > 0));
    printf("!(a == b): %d\n\n", !(a == b));

    // Unary Operators
    printf("Unary Operations:\n");
    int x = 5;
    printf("x before increment: %d\n", x);
    printf("Post-increment x++: %d\n", x++);
    printf("Value after post-increment: %d\n", x);
    printf("Pre-increment ++x: %d\n", ++x);
    printf("Post-decrement x--: %d\n", x--);
    printf("Value after post-decrement: %d\n", x);
    printf("Pre-decrement --x: %d\n\n", --x);

    // Assignment Operators
    printf("Assignment Operations:\n");
    int y = 10;
    y += 5;  // y = y + 5
    printf("y += 5: %d\n", y);
    y -= 3;  // y = y - 3
    printf("y -= 3: %d\n", y);
    y *= 2;  // y = y * 2
    printf("y *= 2: %d\n", y);
    y /= 2;  // y = y / 2
    printf("y /= 2: %d\n", y);
    y %= 4;  // y = y % 4
    printf("y %%= 4: %d\n\n", y);

    // sizeof Operator
    printf("Sizeof Operator:\n");
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of char: %lu bytes\n", sizeof(char));

    return 0;
}
