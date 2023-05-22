#include <iostream>

using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int leftlen = m - l + 1;
    int rightlen = r - m;

    int *left = new int[leftlen];
    int *right = new int[rightlen];

    for (i = 0; i < leftlen; i++)
        left[i] = arr[i + l];
    for (j = 0; j < rightlen; j++)
        right[j] = arr[m + j + 1];

    i = j = 0;
    k = l;

    while (i < leftlen && j < rightlen)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < leftlen)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < rightlen)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void MergeSort(int arr[], int l, int r)
{
    if (l >= r)
        return;

    int m = l + (r - l) / 2;
    MergeSort(arr, l, m);
    MergeSort(arr, m + 1, r);

    merge(arr, l, m, r);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    MergeSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}