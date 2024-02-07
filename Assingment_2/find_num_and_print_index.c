/******************************************************
 Write a program to check if a number N exists in the array or not.
 If it exists, print the index number.
*******************************************************/
#include <stdio.h>
int main() {
    int size, target, foundIndex = -1;
    printf("Enter the array size: ");
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++) {
        printf("Input element %d: ", i);
        scanf("%d", &array[i]);
    }
    printf("Input N: ");
    scanf("%d", &target);
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            foundIndex = i;
            break;
        }
    }
    if (foundIndex != -1) {
        printf("Found at index: %d\n", foundIndex);
    } else {
        printf("NOT Found\n");
    }

 return 0;
}
