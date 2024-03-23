
/**********************
https://www.hackerrank.com/challenges/pointer-in-c/problem
***********************/
#include <stdio.h>
void update(int *a, int *b) {
    int sum = *a + *b;
    int diff = abs(*a - *b);
    *a = sum; 
    *b = diff; 
}
int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    update(&a, &b); 
    printf("%d\n%d", a, b);
    return 0;
}