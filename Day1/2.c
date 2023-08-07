// C/java/c++ program to swap two numbers without using third variable.
#include <stdio.h>
int main()
{
    int a, b;
    printf("A= ");
    scanf("%d", &a);
    printf("B= ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("after swapping values are:  \nA= %d \nB= %d", a, b);
    return 0;
}