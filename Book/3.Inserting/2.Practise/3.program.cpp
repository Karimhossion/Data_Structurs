//index specific element 
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

    int index;
    cout<<"Enter find element : ";
    cin>>index;
    int j;
    while (j<arrSize)
    {
        if (array[j]==index)
        {
            cout<<"index element : "<<j;
            return 0;
        }
        j++;
    }
    cout<<"Invalid"<<endl;
    
    
    
    return 0;
}