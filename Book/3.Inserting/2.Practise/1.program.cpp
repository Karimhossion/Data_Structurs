//10 integer array insert new value(Inserting ).
#include<iostream>
using namespace std;
int main(){
    int arrSize;
    cout<<"array size : ";
    cin>>arrSize;

    int array[arrSize];
    cout<<"element of 10 integer : ";
    for (int i = 0; i < arrSize; i++)
    {
        cin>>array[i];
    }

    int newValue;
    cout<<"Insert a new Value : ";
    cin>>newValue;

    array[arrSize]=newValue;
    cout<<"Array after insert : ";
    for (int i = 0; i < arrSize+1; i++)
    {
        cout<<" "<<array[i];
    }
    return 0;
}