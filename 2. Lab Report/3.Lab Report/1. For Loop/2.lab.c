//Write a c program to take an array , Seperate the even Values and Odd 
//Values and store them in separate arrays named Even[] and odd[].
#include<stdio.h>
int main()
{
    int arrSize;
    printf("Enter array Size : ");
    scanf("%d",&arrSize);

    int array[arrSize];
    printf("Enter element : ");
    for (int i = 0; i < arrSize; i++)
    {
        scanf("%d",array[i]);
    }
    //store 
    int even[arrSize],odd[arrSize];
    int evenCoun=0,oddCoun=0;
    
    for (int i = 0; i < arrSize; i++)
    {
        if (array[i]%2==0)
        {
            even[evenCoun++]=array[i];
        }else{
            odd[oddCoun++]=array[i];
        }
    }
    printf("Even Values : ");
    for (int i = 0; i < evenCoun; i++)
    {
        printf("%d ",even[i]);
    }
    printf("Odd Values : ");
    for (int i = 0; i < oddCoun; i++)
    {
        printf("%d ",odd[i]);
    }
    
}
