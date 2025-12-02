/* Name: Shaikh Afzal
branch year: computer engineering/F.E
UIN:251P120
Roll no : 42
DIV_D */

#include <stdio.h>
// Iterative method
 int factorialIterative(int n) { 
     int fact = 1;
for (int i = 1; i <= n; i++) { 
    fact = fact * i;
}
return fact;

}
// Recursive method
int factorialRecursive(int n) {
if (n == 0 || n == 1)
return 1;
else

return n * factorialRecursive(n - 1);
int main() {
int num;
printf("Enter a number: ");
scanf("%d", &num);
printf("Factorial (Iterative) = %d\n", factorialIterative(num)); printf("Factorial (Recursive) = %d\n", factorialRecursive(num));
return 0;
}