#include <iostream>

using namespace std;

int partition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = l - 1;

    for (int j = l; j < h; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return (i + 1);
}

void QuickSort(int arr[],int l,int h)
{
    if (l < h)
    {
        int index = partition(arr, l, h);

        QuickSort(arr, l, index - 1);
        QuickSort(arr, index + 1, h);
    }
}

////////Main Function////////// 


int main()
{
    int arr[] = { 10, 7, 8, 9, 1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    QuickSort(arr, 0, n - 1);
    
    cout << "The Sorted Array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}