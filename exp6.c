/* Name: Shaikh Afzal
branch year: computer engineering/F.E
UIN:251P120
Roll no : 42
DIV_D */
#include <stdio.h>
void counter() {

  static int count = 70;
  count++;
  printf("count = %d\n", count);
}
int main() {
counter();
counter();
counter();
counter();
return 0;
}