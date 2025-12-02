/* Name: Shaikh Afzal
branch year: computer engineering/F.E
UIN:251P120
Roll no : 42
DIV_D */

#include <stdio.h>
void addMatrix(int mat1 [2][2], int mat2[2][2], int sum[2][2]) {
for (int i = 0; i < 2; i++){
for (int j = 0; j < 2; j++){
sum[i][j] = mat1[i][j] + mat2[i][j];
}
}
}
int main () {
int m1[2][2], m2[2][2], result[2][2];
printf("Enter The Value For The Matrix1 :"); for(int i = 0; i < 2; i++){
}
for (int j=0;j < 2; j++){
}
scanf("%d", &m1[i][j]);
printf("Enter The Value For The Matrix2 :"); for(int i = 0; i < 2; i++){
for (int j = 0; j < 2; j++){ scanf("%d", &m2[i][j]);
}
}
addMatrix(m1, m2, result); printf("Result: ");
for (int i = 0; i< 2; i++){ for (int j = 0; j < 2; j++){ printf("%d ", result[i][j]);
printf("\n");
}
}
return 0;
}