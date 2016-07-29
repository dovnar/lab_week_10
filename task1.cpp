#include <iostream>

using namespace std;

int rectangle(int height, int width)
{
	for (int i = 1; i <= height; i++)
	{
		for (int j = 1; j <= width; j++)
		{
			if (i == 1 &&
				j == 1)
			{
				char n = 218;
				cout << n;
			}
			else if (i == 1 && j == width)
			{
				char n = 191;
				cout << n;
			}
			else if (i == height &&
				j == 1)
			{
				char n = 192;
				cout << n;
			}
			else if (i == height &&
				j == width)
			{
				char n = 217;
				cout << n;
			}
			else if (i == 1 || i == height)
			{
				char n = 196;
				cout << n;
			}
			else if (j == 1 ||
				j == width)
			{
				char n = 179;
				cout << n;
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}

int main()
{
	int result;
	int height;
	int width;
	cout << "enter the height of the rectangle = ";
	cin >> height;
	cout << "enter the width of the rectangle = ";
	cin >> width;
	result = rectangle(height, width);
	return 0;
}