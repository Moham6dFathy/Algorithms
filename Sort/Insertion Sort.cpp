#include <iostream>

using namespace std;


void InsetionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int j = i-1;
        int temp = arr[i];
        while (temp < arr[j] && j >= 0)
        {
            swap(arr[j], arr[j+1]);
            j--;
        }
    }
}

int main()
{
    
    int arr[] = { 3,9,7,2,5,4,6,10,1 };

    InsetionSort(arr, 9);

    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
