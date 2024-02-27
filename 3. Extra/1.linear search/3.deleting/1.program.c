//deleting 
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

    int position;
    printf("delete position : ");
    scanf("%d",&position);

    if (position>=arrSize+1)
    {
        printf("Delete is not possible\n");
    }
    else
    {
        for (int i = position-1; i < arrSize-1; i++)
        {
            array[i]=array[i+1];
        }
        printf("deleting element : ");
        for (int i = 0; i < arrSize-1; i++)
        {
            printf("%d ",array[i]);
        }  
    }
    return 0;
}