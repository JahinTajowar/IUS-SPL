#include <stdio.h>
int swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int num1, num2;
    printf("Enter two integer: ");
    scanf("%d %d", &num1, &num2);
    swap(&num1, &num2);
    printf("Swaped out is:  %d , %d", num1,num2);
    return 0;
}
