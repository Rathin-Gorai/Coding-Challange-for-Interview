// Program to find an element from one dimensional array.
#include<stdio.h>
int main()
{
    int array[10],i,size,element;
    printf("enter the number of elements");
    scanf("%d", &size);
    printf("enter the elements:");
    for(i=0;i<size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the item to be search: ");
    scanf("%d",&element);
    i=0;
    while(i<size && element != array[i])
    {
        i++;
    }
    if(i<element)
    {
        printf("Item found at position %d ",i+1);
    }
    else
    {
        printf("Element not found. ");
    }
    return 0;
}