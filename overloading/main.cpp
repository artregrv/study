#include <iostream>

#include "rectangle.h"

int main(int argc, char *argv[])
{
	Rectangle rectangle(atoi(argv[1]), atoi(argv[2]));
	
	std::cout << rectangle;
}

