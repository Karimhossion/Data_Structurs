//bubble sort
#include<iostream>
using namespace std;
int main()
{
  int arrSize;
  cout<<"array size : ";
  cin>>arrSize;
  int array[arrSize];
  cout<<"element : ";
  for (int i = 0; i < arrSize; i++){
        cin>>array[i];
  }

  for (int i = 0; i < arrSize-1; i++)
  {
    for (int j = 0; j < arrSize-i-1; j++)
    {
        if (array[j]>array[j+1])
        {
            int temp = array[j];
            array[j] = array[j+1];
            array[j+1]= temp;
        }
    }
  }
  cout<<"Bubble sort array : ";
  for (int i = 0; i < arrSize; i++)
  {
    cout<<" "<<array[i];
  }
  return 0;
}