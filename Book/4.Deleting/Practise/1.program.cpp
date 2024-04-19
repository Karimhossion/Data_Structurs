//deleting 
#include<iostream>
using namespace std;
int main()
{
    int arrSize;
    cout<<"array size : ";
    cin>>arrSize;

    int array[arrSize];
    cout<<"element : ";
    for (int i = 0; i < arrSize; i++)
    {
        cin>>array[i];
    }
    int delet;
    cout<<"delete position : ";
    cin>>delet;

    for (int i = delet-1; i < arrSize-1; i++)
    {
        array[i]=array[i+1];
    }
    
    cout<<"delete element : ";
    for (int i = 0; i < arrSize-1; i++)
    {
        cout<<" "<<array[i];
    }
    return 0;
}