#include <iostream>

using namespace std;

// Непонятное название функции
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
	// Что делает программа? Пользователь не знает об исходном коде.
	value(number);
	cout << endl;
}
