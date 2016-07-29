#include <iostream>

using namespace std;

int cube(int number1, int number2)
{
	if (number1 > number2)
	{
		return number1;
	}
	else if (number1 < number2)
	{
		return number2;
	}
	else
	{
		cout << "error";
		return 0;
	}
}

int main()
{
	int number1, number2;
	cout << "enter the number: ";
	cin >> number1;
	cout << "enter the number: ";
	cin >> number2;
	cout << cube(number1, number2) << endl;
	return 0;
}