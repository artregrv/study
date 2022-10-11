#include <iostream>

int *mergeSort(int &array, int leftBorder, int rightBorder)
{
	if (leftBorger == rightBorder)
		return 
	mergeSort(array, 
}

int merge(int *leftArray, int rightArray, int size)
{
	int result[size * 2];
	int i = 0;
	int j = 0;
	for (int k = 0; k < size * 2; ++k) {
		if (leftArray[i] < rightArray[j]) {
			result[k] = leftArray[i]; 	
			++i;
		} else {
			result[k] = rightArray[j];
			++j;
		}
	}	
	return result;
}

int main()
{

}
