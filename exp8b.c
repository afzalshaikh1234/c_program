/* Name: Shaikh Afzal
branch year: computer engineering/F.E
UIN:251P120
Roll no : 42
DIV_D */

#include <stdio.h>
int isPalindrome(char str[]) {
    int start = 0, end = 0;
    while (str[end] != '\0') {
        end++;
    }
    end--;
    if (str[end] == '\n') {
        str[end] = '\0';
        end--;
    }
    while (start < end) {
        if (str[start] != str[end]) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    if (isPalindrome(str))
        printf("The string is a Palindrome.");
    else
        printf("The string is NOT a Palindrome.");
    return 0;
}