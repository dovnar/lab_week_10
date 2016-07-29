#include <iostream>

using namespace std;

void value(int number)
{
	if (number > 0)
	{
		cout << "true";
		return;
	}
	else if (number < 0)
	{
		cout << "false";
		return;
	}
	else
	{
		cout << "zero";
		return;
	}
}

int main()
{
	int number;
	cout << "enter the number: ";
	cin >> number;
	value(number);
	cout << endl;
}