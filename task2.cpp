#include <iostream>
using namespace std;

long double fact(int n)
{
	int result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}

int main()
{
	int n;
	setlocale(0, ""); 
	cout << "Введите число для вычисления факториала: ";
	cin >> n;
	cout << "Факториал для числа " << n << " = " << fact(n) << endl; 
	return 0;
}