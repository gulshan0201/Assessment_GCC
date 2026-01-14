
// Write a C Program multiplies given number by 4 using bitwise operators.
#include <stdio.h>

int main() {
    int number, tempnum;

    // Read input
    scanf("%d", &number);

    // Assign number to tempnum
    tempnum = number;

    // Multiply by 4 using left shift operator
    tempnum = tempnum << 2;

    // Print result
    printf("%d", tempnum);

    return 0;
}