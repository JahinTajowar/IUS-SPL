#include <stdio.h>
int main() {
    float time;
    printf("Take a time: ");
    scanf("%f",&time);
    if (time < 10) {
        printf("Good morning.\n"); // Use printf in C
    } else if (time < 20) {
        printf("Good day.\n");
    } else {
        printf("Good evening.\n");
    }
    return 0;
}
