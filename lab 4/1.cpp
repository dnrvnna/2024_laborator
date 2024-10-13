#include <iostream>
#include <iomanip>

using namespace std;
//Вариант 3

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if(a > b && b > c)
	{
		cout << a - b - c;
	}
	else if(b > a && b % c == 0)
	{
		cout << b / c + b - a;
	}
	else
	{
		cout << a + b + c;
	}

	return 0;
}