using namespace std;
#include <iostream>
#include <iomanip>
#include <math.h>

/*
void taska()
{
	float mile;
	const float kilometers = 1.609;

	cout << "Enter the miles you wish to convert to kilmometers: ";
	cin >> mile;
	cout << endl << "The conversion is: " << mile * kilometers;



}
*/
/*
void taskbc()
{
	float value;
	const float pi = atan(1) * 4;
	
	cout << "Enter the value of the for the radius: ";
	cin >> value;
	float volume = 4 * (pi * pow(value, 3)) / 3;
	float area = 4 * pi * pow(value, 3);
	cout << endl << "The volume of the Sphere is : " << volume << endl;
	cout << "The area of the sphere is: " << area;

}
*/

/*
void taskd()
{
	int x1, x2, y1, y2;
	
	cout << "Enter x1 value: ";
	cin >> x1;
	cout << endl << "Enter the x2 value: ";
	cin >> x2;
	cout << endl << "Enter the y1 value: ";
	cin >> y1;
	cout << endl << "Enter the y2 value: ";
	cin >> y2;
	cout << endl << "The x midpoint is: " << (x1 + x2) / 2 << endl;
	cout << "The y midpoint is: " << (y1 + y2) / 2;
}
*/

void taskef()
{
	float y, p, r, n;
	cout << "Enter the principal invested: ";
	cin >> p;
	cout << "Enter the interest rate: ";
	cin >> r; 
	cout << endl << "enter the number of years: ";
	cin >> n;
	y = p * pow( r, n);

	cout << endl << "The total amount of money saved is: " << y;


}
int main()
{

	taskef();
	return 0;

}