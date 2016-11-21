#include "Bulk.h"
using namespace std;


void Bulk::set_value()
{
	cout << "please input lengh, width,height:";
	cin >> lengh;
	cin >> width;
	cin >> height;
}

void Bulk::display()
{
	cout << "    The volume is: " << lengh*width*height << endl;
	cout << "    The surface area is: " << 2 * (lengh*width + lengh*height + width*height) << endl;
	cout << endl;
}