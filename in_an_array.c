/***************************************
Write a program to take inputs in an array of size 15 and then print the array.
****************************************/
#include <stdio.h>

int main() {
    int array[15];
    printf("Take 15 integers:\n");
    for (int i = 0; i < 15; ++i) {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &array[i]);
    }
    printf("\nArray elements are:\n");
    for (int i = 0; i < 15; ++i) {
    printf("%d ", array[i]);
    }
    return 0;
}

