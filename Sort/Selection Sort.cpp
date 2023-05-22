#include<iostream>

using namespace std;


void SelectionSort(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int min = i;

		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		swap(arr[min], arr[i]);
	}
}

int main() {

	int arr[] = { 3,9,7,1,2 };

	SelectionSort(arr, 5);

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}


	return 0;
}