#include "Rectangle.h"


Rectangle::Rectangle(float x, float y) :length(x), width(y)
{
}


Rectangle::~Rectangle()
{
}

float Rectangle::area()
{
	float area;
	area = length*width;
	return area;
}

float Rectangle::perimeter()
{
	float perimeter;
	perimeter = (length + width) * 2;
	return perimeter;
}

float Rectangle::diagonal()
{
	float diagonal;
	diagonal = sqrt(length*length + width*width);
	return diagonal;
}

bool Rectangle::is_square()
{
	if (length==width)
	{
		return true;
	}
	else
	{
		return false;
	}
}