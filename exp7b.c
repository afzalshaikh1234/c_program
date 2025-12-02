/* Name: Shaikh Afzal
branch year: computer engineering/F.E
UIN:251P120
Roll no : 42
DIV_D */

#include <stdio.h>

int findLargest(int arr[], int n) {
    int largest = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > largest)
            largest = arr[i];
    return largest;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("The largest element is: %d\n", findLargest(arr, n));
    return 0;
}