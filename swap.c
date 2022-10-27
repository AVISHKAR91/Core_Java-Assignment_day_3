#include<stdio.h>
int main()
{
    int a = 6;
    int b = 5;
    printf("Before swapping:\n");
    printf("a is :%d\n, b is: %d", a, b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\nAfter swapping:\n");
    printf("a is :%d\n, b is: %d", a, b);

}