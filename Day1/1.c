// 1.C/Java/C++ program to find factorial of a number.
#include <stdio.h>
int main()
{
    int num, fact = 1;
    printf("Enter the value: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("Faactorial of %d is = %d", num, fact);
    return 0;
}