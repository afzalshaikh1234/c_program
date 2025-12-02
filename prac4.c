/* Name: Shaikh Afzal
branch year: computer engineering/F.E
UIN:251P120
Roll no : 42
DIV_D */

#include <stdio.h>
int isPrime(int num) {
int i;
if (num <= 1)
return 0;
for (i= 2; i <= num / 2; i++) {
if (num % i == 0)
return 0;
}

return 1;
}
void printPrimes(int start, int end) {
int i;
printf("Prime numbers between %d and %d are:\n", start, end); for (i = start; i <= end; i++) {
if (isPrime(i))
printf("%d ", i);
}

printf("\n");
}
 int main() {
 
int start, end;
printf("Enter the starting number: ");
scanf("%d", &start);
printf("Enter the ending number: "); scanf("%d", &end);
printPrimes(start, end);
return 0;
}