/* 
 * too hard for me - 2022.07.23
*/


/* 
 *  Karatsuba multiplication algorithm
 *  works only for number with the same lenght
 *  lenght should be power of 2
*/

#include <iostream>

std::string karatsubaMultiplication(const std::string &firstNumber, const std::string &secondNumber)
{
	if (firstNumber.size() == 1 && secondNumber.size() == 1)
		return std::to_string(std::stoi(firstNumber) * std::stoi(secondNumber)); 

	std::string a = firstNumber.substr(0, firstNumber.size() / 2);
	std::string b = firstNumber.substr(firstNumber.size() / 2, firstNumber.size() / 2);
	std::string c = secondNumber.substr(0, secondNumber.size() / 2);
	std::string d = secondNumber.substr(secondNumber.size() / 2, secondNumber.size() / 2);

	std::string axc = karatsubaMultiplication(a, c);
	std::string bxd = karatsubaMultiplication(b, d);
//	asbxcxd = karatsubaMultiplication(

	return "";
}


int main()
{
	karatsubaMultiplication("1234", "5678");	
	return 0;
}

