#include <iostream>

class Rectangle final
{
public:
	explicit Rectangle();
	explicit Rectangle(unsigned width, unsigned height);
	~Rectangle() = default;

	char character() const noexcept;
	void setCharacter(char character) noexcept;

	unsigned width() const noexcept;
	void setWidth(unsigned width) noexcept;

	unsigned height() const noexcept;
	void setHeight(unsigned height) noexcept;

	friend std::ostream &operator<<(std::ostream &os, const Rectangle &rectangle);

private:
	char _character { '*' };

	unsigned _width { 0 };
	unsigned _height { 0 };
};
