#include<stdio.h>
int main()
{
    int array[10],i;
    printf("Enter 10 integer value : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&array[i]);
    }

    int newValue;
    printf("insert a new value : ");
    scanf("%d",&newValue);

    array[i]=newValue;
    i++;

    printf("Array after insertion : ");
    for (i = 0; i < 11; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}