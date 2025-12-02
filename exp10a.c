/* Name: Shaikh Afzal
branch year: computer engineering/F.E
UIN:251P120
Roll no : 42
DIV_D */

#include <stdio.h>

int main() {
    int a, b, sum;
    int *p, *q;

    p = &a;
    q = &b;

    printf("Enter first number: ");
    scanf("%d", p);
    printf("Enter second number: ");
    scanf("%d", q);

    sum = *p + *q;
    printf("Sum = %d", sum);
    return 0;
}