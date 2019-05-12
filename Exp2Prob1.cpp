#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	char a;
	int hours;

	cout << "Subscription Packages" << endl;
	cout << " " << endl;
	cout << "Which of the following packages did you purchased? (pick the letter of your choice)" << endl;
	cout << "a) Package A: For Php 995/month (10 hours of access)" << endl;
	cout << "b) Package B: For Php 1495/month (20 hours of access)" << endl;
	cout << "c) Package C: For Php 1995/month (unlimited access)" << endl;
	cout << " " << endl;
	cout << "Answer: ";
	cin >> a;

	switch (a)
	{
	case 'a':
	case 'A':
		cout << "Hours used: ";
		cin >> hours;

		if (hours <= 10)
			cout << "Monthly bill: Php " << 995;
		else if (hours > 10)
			cout << "Monthly bill: Php " << 995 + (20 * (hours - 10));
		break;

	case 'b':
	case 'B':
		cout << "Hours used: ";
		cin >> hours;

		if (hours <= 20)
			cout << "Monthly bill: Php " << 1495;
		else if (hours > 20)
			cout << "Monthly bill: Php " << 1495 + (10 * (hours - 20));
		break;

	case 'c':
	case 'C':
		cout << "Hours used: ";
		cin >> hours;

		if (hours >= 0)
			cout << "Monthly bill: Php " << 1995;
		break;
	}
	_getch();
	return 0;
}