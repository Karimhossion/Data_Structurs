//traversing 
#include<stdio.h>
int main()
{
    int arrSize;
    printf("array size : ");
    scanf("%d",&arrSize);

    int array[arrSize];
    printf("element : ");
    for (int i = 0; i < arrSize; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Traverse element : ");
    for (int i = 0; i < arrSize; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;   
}