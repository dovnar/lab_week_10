#include <iostream>

using namespace std;

int cube(int number)
{
	int result = number * number * number;
	return result;
}

int main()
{
	int number;
	cout << "enter the number: ";
	cin >> number;
	cout << cube(number) << endl;
}