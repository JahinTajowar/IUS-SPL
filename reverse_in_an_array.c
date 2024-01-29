/********************************************
Write a program to print an array in reverse order.
*********************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char str[10005];
    printf("Take an array or string: ");
    gets(str);


    char tmp;
    int n = strlen(str) - 1;
    int i = 0, j = n;

    while (i < j) {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        i++;
        j--;
    }

    printf("Reverse output is: %s", str);

    return 0;
}
