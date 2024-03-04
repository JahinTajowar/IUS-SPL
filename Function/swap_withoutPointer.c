#include<stdio.h>
int main()
{
    int x,y;
    printf("Take two integer: ");
    scanf("%d %d", &x, &y);
    int z=x;
    x=y;
    y=z;
    printf("Swaped output is:  %d , %d",x,y);
    return 0;
}
