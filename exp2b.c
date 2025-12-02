/* Name: Shaikh Afzal
branch year: computer engineering/F.E
UIN:251P120
Roll no : 42
DIV_D */

#include <stdio.h>

int main() {
    int lim;
    int sum = 0;

    printf("Enter the limit: ");
    scanf("%d", &lim);

    for (int i = 0; i <= lim; i++) {
        if (i % 2 == 1) {
            sum += 1;
        }
    }

    printf("Sum of odd numbers is %d", sum);
    return 0;
}