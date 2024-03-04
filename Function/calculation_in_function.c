#include <stdio.h>
int function(int a, int b) {
    int choice;
    printf("Choice 1 : Addition\n");
    printf("Choice 2 : Subtraction\n");
    printf("Choice 3 : Multiplication\n\n");
    printf("Enter Your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        return a + b;
    } else if (choice == 2) {
        return a - b;
    } else if (choice == 3) {
        return a * b;
    } else {
        printf("Invalid choice\n");
        return 0;
    }
}

int main() {
    int a, b, result;
    printf("Enter two integers for the operation: ");
    scanf("%d %d", &a, &b);
    result = function(a, b);
    printf("Result of the operation is: %d\n", result);

    return 0;
}
