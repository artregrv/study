#include "rectangle.h" 

Rectangle::Rectangle()
{
	_width = 1;
	_height = 1;
}

Rectangle::Rectangle(unsigned width, unsigned height) :
	_width(width),
	_height(height)
{
	_width = width;
	_height = height;
}

std::ostream &operator<<(std::ostream &os, const Rectangle &rectangle)
{
	for (int i = 0; i < rectangle._width; ++i)
		std::cout << rectangle._character << ' ';
	
	std::cout << '\n';

	for (int i = 0; i < rectangle._height - 2; ++i) {
		std::cout << rectangle._character << ' ';

		for (int j = 0; j < rectangle._width - 2; ++j)
			std::cout << ' ' << ' ';
		
		std::cout << rectangle._character << ' ';
		
		std::cout << '\n';
	}

	for (int i = 0; i < rectangle._width; ++i)
		std::cout << rectangle._character << ' ';
	
	std::cout << '\n';	
}
