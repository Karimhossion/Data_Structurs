//Wirite a program that take an array (as input) and then print the array.
// 15 integer value should be inserted into the array.
#include<stdio.h>
int main(){
    int array[15];
    printf("Enter 15 integer Value : ");
    for (int i = 0; i < 15; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Traverse the array : ");

    for (int i = 0; i < 15; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}