#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int a, n, sum;
	;
	bool done = false;

	do
	{
		cout << "Enter a number: ";
		cin >> n;

		if (n <= 0)
			done = true;

		else
		{
			sum = 0;
			for (a = 1; a <= n; ++a)
			{
				sum = sum + a;
			}
			cout << "The sum of all whole numbers from 1 to " << n << " is " << sum << endl;
		}

	} while (!done);

	cout << "Thank you!";

	_getch();
	return 0;
}