#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::pow;
using std::round;

int main()
{
	int lower_limit = 1;
	// print name of program
	cout << "Circle Calculator" << endl << endl;

	int count = 1;
	char choice = 'y';
	while (true) 
	{

		// get radius from user
		double radius;
		while (true)
		{
			cout << "Enter radius:  ";
			cin >> radius;
			if (radius <= 0) {
				cout << "Radius must be a positive number.\n" << endl;
				continue;
			}
			break;
		}

		srand(time(nullptr));
		int number = rand() % lower_limit;
		++number;

		// make calculations
		double pi = 3.14159;
		double diameter = 2 * radius;
		double circumference = diameter * pi;
		double area = pi * pow(radius, 2.0);

		// round to 1 decimal place
		circumference = round(circumference * 10) / 10;
		area = round(area * 10) / 10;

		

		// write output to console
		cout << "Diameter:      " << diameter << endl
			<< "Circumference: " << circumference << endl
			<< "Area:          " << area << endl << endl;

		cout << "Enter another Radius?  (y/n): ";
		cin >> choice;
		cout << endl;

		{
			if (choice < 1 || choice < lower_limit) 
			{
				cout << "Radius must be a positive number\n" << endl;
				continue;
			}

			if (choice == 'Y' || choice == 'y') {
				continue;
			}

			if (choice == 'N' || choice == 'n') {
				break;
			}
			++count;
		}

		
	}
	cout << "Bye!\n\n";
	// return value that indicates normal program exit
	return 0;
}