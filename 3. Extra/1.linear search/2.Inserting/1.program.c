//inserting array
#include<stdio.h>
int main()
{
    int arrSize,i;
    printf("array size : ");
    scanf("%d",&arrSize);

    int array[arrSize];
    printf("element : ");
    for (int i = 0; i < arrSize; i++)
    {
        scanf("%d",&array[i]);
    }

    int newValue;
    printf("insert a newvalue : ");
    scanf("%d",&newValue);
    array[arrSize]=newValue;
    arrSize++;
    printf("Inserting : ");
    for (i = 0; i < arrSize; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}