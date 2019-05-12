#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
	int a;

	cout << "Counting... " << endl;
	for (a = 1; a <= 10; a++)
		cout << a << ",";
	for (a > 10; a < 30; a++)
	{
		if (a % 2 == 0)
		{
			cout << a << ",";
		}
	}
	cout << "30";
	_getch();
	return 0;
}