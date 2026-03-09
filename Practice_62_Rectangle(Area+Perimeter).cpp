
#include <iostream>
using namespace std;

class Rectangle
{

private:
	float length;
	float width;
public:


	void set_dimensions(float rect_length, float rect_width)
	{
		length = rect_length;
		width = rect_width;
	}


	float get_area()
	{
		return length * width;
	}

	float get_perimeter()
	{
		return 2 * (length + width);
	}
	void display_details()
	{
		cout << "Length: " << length << endl;
		cout << "Width: " << width << endl;
		cout << "Area: " << get_area() << endl;
		cout << "Perimeter" << get_perimeter() << endl;
	}

};




int main()
{
	Rectangle rect;

	rect.set_dimensions(2.0, 5.0);
	rect.display_details();

	return 0;

}
