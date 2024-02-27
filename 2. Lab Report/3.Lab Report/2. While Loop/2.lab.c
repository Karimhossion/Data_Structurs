#include<stdio.h>
int main()
{
    int arrSize;
    printf("Enter array size : ");
    scanf("%d",&arrSize);

    int array[arrSize];
    printf("Enter element : ");
    int i=0;
    while (i<arrSize)
    {
        scanf("%d",&array[i]);
        i++;
    }
    int even[arrSize],odd[arrSize];
    int evenCount=0,oddCount=0;
    int j=0;
    while (j<arrSize)
    {
        if (array[j]%2==0)
        {
            even[evenCount++]=array[j];
        }else
        {
            odd[oddCount++]=array[j];
        }
        j++;
    }
    printf("Even Values : ");
    int k=0;
    while (k<evenCount)
    {
        printf("%d ",even[k]);
        k++;
    }
    printf("\nOdd Values : ");
    int l=0;
    while (l<oddCount)
    {
        printf("%d ",odd[l]);
        l++;
    }
    return 0;  
}


