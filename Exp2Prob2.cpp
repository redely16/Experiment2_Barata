#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int gu, ub;

	cout << "CUSTOMER'S WATER BILL" << endl;
	cout << " " << endl;
	cout << "Gallon(s) used: ";
	cin >> gu;
	cout << " " << endl;
	cout << "Unpaid Balance:      Php ";
	cin >> ub;
	cout << "Water Demand Charge: Php 35" << endl;
	cout << "Consumption Charge:  Php " << 1.10 * gu << endl;

	if (ub > 0)
	{
		cout << "Late charge:         Php 20" << endl;
		cout << " " << endl;
		cout << "Monthly Water Bill:  Php " << 35 + (1.10 * gu) + ub + 20 << endl;
	}
	else if (ub = 0)
	{
		cout << "Monthly Water Bill:  Php " << 35 + (1.10 * gu);
	}
	_getch();
	return 0;
}