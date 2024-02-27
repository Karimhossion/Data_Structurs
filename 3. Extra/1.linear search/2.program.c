//linear search
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
    int x;
    printf("element search : ");
    scanf("%d",&x);
    int count=0;
    for (int i = 0; i < arrSize; i++)
    {
        if (array[i]==x)
        {
            printf("element position : %d\n",i+1);
            count+=1;
        }
    }
    if (count==0)
    {
        printf("element is not position\n");
    }
    
}