#include <iostream>
#include <conio.h>


using namespace std;

int main()
{
	cout << "Fibonacci numbers:" << endl;

	int n, first = 0, second = 1, next;

	for (n = 0; n < 21; n++)
	{
		if (n <= 1)
			next = n;

		else
		{
			next = first + second;

			first = second;
			second = next;
		}
		cout << next << ",";
	}
	cout << "10946";

	_getch();
	return 0;
}