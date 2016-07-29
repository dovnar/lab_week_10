#include <iostream>

using namespace std;

int primeNumber(int number)
{
	int n = 0;
	for (int i = 1; i <= number; i++)
	{
		if (number%i == 0)
		{
			n++;
		}
	}
	return n;
}

int main()
{
	int number;
	cout << "enter the number for verification: ";
	cin >> number;
	if (primeNumber(number) == 2)
	{
		cout << "prime number";
	}
	else
	{
		cout << "number of difficult";
	}
	cout << endl;
	return 0;
}