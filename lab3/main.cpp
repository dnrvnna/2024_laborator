#include <iostream>
#include <iomanip>

using namespace std;
//Вариант 3

int main()
{
	unsigned int x;
	int i;
	cin >> x >> i;

	cout << (x & (1 << i));

	return 0;
}