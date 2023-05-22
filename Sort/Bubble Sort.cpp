#include <iostream>

using namespace std;


void BubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }
}
int main()
{
    int arr[] = { 3,9,7,2,1,10,6,5,4,8 };

    BubbleSort(arr, 10);

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
   
    return 0;
}
