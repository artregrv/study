#include <iostream>
#include <vector>

int mergeAndCountSplitInversions(std::vector<int> &leftHalf, 
				 std::vector<int> &rightHalf, 
				 std::vector<int> &result)
{
	int numberOfInversions = 0;

	int i = 0;
	int j = 0;
	
	int size = result.size();

	for (int k = 0; k < size; ++k) {
		if (leftHalf[i] <= rightHalf[j]) {
			result[k] = leftHalf[i];
			++i;
		} else {
			result[k] = rightHalf[j];
			++j;
			numberOfInversions += abs(i - j); 
		}
	}

	return 0;
}

int countInversions(std::vector<int> &array, int size)
{
	int x = 0;
	int y = 0;
	int z = 0;

	if (size == 1)
		return 0;
	else {
		std::vector<int> leftHalf(size / 2);
		std::vector<int> rightHalf(size / 2);
		
		x = countInversions(leftHalf, size / 2);
		y = countInversions(rightHalf, size / 2);

		std::vector<int> result(size);

		z = mergeAndCountSplitInversions(leftHalf, rightHalf, result);
	}
	
	return x + y + z;
}

int main()
{
	std::vector<int> testVector = {1, 3, 5, 2, 4, 6};

	std::cout << countInversions(testVector, testVector.size());

	return 0;
}

