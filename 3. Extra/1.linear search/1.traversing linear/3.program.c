//Traversing
//function use
#include<stdio.h>
void printArray(int* arr, int n)
{
    printf("traversing array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("array size : ");
    scanf("%d",&n);
    int arr[n];
    printf("element : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printArray(arr,n);
}






/*#include<stdio.h>
void printArray(int* arr,int n )
{
    printf("array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[]={2,-1,5,6,0,-3};
    int n= sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    return 0;
}*/