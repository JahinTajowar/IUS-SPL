
#include<stdio.h>
int sum(int a ,int b)
{
    return a+b;
}

int main()
{
    int a,b,res;
    printf("Take two integer for sum: ");
    scanf("%d %d",&a,&b);
    res= sum(a,b);
    printf("some of this two integer is: %d ", res);
    return 0;
}
