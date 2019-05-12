#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

int main()

{

	int x, y;
	double z = 2.5;

	cout << "Value of x: ";
	cin >> x;


	switch (x)
	{
	case 1:
		cout << "Value of y: ";
		cin >> y;

		if (y >= 5)
			cout << setw(10) << setprecision(2) << fixed << "V = " << x + (y / z) << endl;
		else if (1 < y < 5)
			cout << setw(10) << setprecision(2) << fixed << "V = " << x * y * z << endl;
		
		break;

	case 2:
		cout << "Value of y: ";
		cin >> y;

		if (y <= 5)
			cout << setw(10) << setprecision(2) << fixed << "V = " << abs((x - y) / z);
		else if (y > 5)
			cout << setw(10) << setprecision(2) << fixed << "V = " << x - sqrt(y + z);
		break;

	default:
		cout << "Value of y: ";
		cin >> y;
		cout << setw(10) << setprecision(2) << fixed << "V = " << x + y + z;

		break;
	}
	_getch();
	return 0;

}