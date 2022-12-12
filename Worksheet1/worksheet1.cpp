using namespace std;
#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES

/*
void taska()
{
	int height, base;
	
	height = 20;
	base = 20;

	cout << "The total area is: " << (height * base) / 2;


}
*/

/*
void taskb()
{
	int height, base;
	cout << "Enter the heightlenght: ";
	cin >> height;
	cout << endl;
	cout << "Enter the baselenght: ";
	cin >> base;
	cout << endl << "The area is: " << (height * base) / 2;



}
*/
/*
void taskc()
{
	int a, b, c;

	cout << "Enter the integer value: ";
	cin >> a;
	cout << endl << "Enter the second integer value: ";
	cin >> b; 
	cout << endl << "Enter the third integer value: ";
	cin >> c;
	cout << endl << "The multiplication of those three value is: " << a * b * c << endl;
}
*/

/*
void taskd()
{
	int squarelenght;
	cout << " Enter the squarelenght: ";
	cin >> squarelenght;
	cout << endl << "The area of the square is: " << squarelenght * squarelenght;



}
*/

void taskef()
{
	int radius;
	float pi, area;
	pi = atan(1) * 4;
	cout << "enter the value of the radius: ";
	cin >> radius;
	area = pi * radius * radius;
	cout << endl << "The area of the cirlce is: " << area;


}


int main()
{
	taskef();
	return 0; 
}