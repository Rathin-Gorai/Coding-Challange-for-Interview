// Program to find an element from one dimensional array.
#include <stdio.h>
int main()
{
    int num = 5, arr[] = {1, 4, 5, 8, 6, 7, 6}, size = sizeof(arr) / sizeof(arr[0]), i, flag = 0;
    for (i = 0; i < size; i++)
    {
        if (num == arr[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Enelemt found at %d position", i + 1);
    }
    else
    {
        printf("Element not found ");
    }
    return 0;
}