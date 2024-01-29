/***********************************************
Write a program to find the minimum number in an array.
************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("Take Arry size: ");
    scanf("%d", &n);
    int a[n];
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        printf("Enter No %d Integer: ", i+1);
        scanf("%d", &a[i]);
        if (a[i] < min)
        //if (a[i] > max)
        {
            min = a[i];
        }
    }
    printf("Minimum Number is: %d", min);
    return 0;
}
