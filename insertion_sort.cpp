#include <iostream>

using namespace std;

int find_min(const int arr[], int first, int last)
{
	int item = arr[first];
	int index = first;
	for (int i = first; i < last; ++i) {
		if (arr[i] < item) {
			item = arr[i]; 
			index = i;
		}
	}
	return index;
}

void insertion_sort(int arr[], int size)
{
	int min_index;
	int tmp;
	for (int i = 0; i < size; ++i) {
		min_index = find_min(arr, i, size);
		tmp = arr[i];
		arr[i] = arr[min_index];					
		arr[min_index] = tmp;
	}
}

int main(int argc, char *argv[])
{
	const int n = 10;
	int arr[n];
	srand(time(NULL));
	for (int i = 0; i < n; ++i) {
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}	
	cout << '\n';
	insertion_sort(arr, n);

	for (int i = 0; i < n; ++i) {
		cout << arr[i] << " ";
	}	
	cout << '\n';	
}
