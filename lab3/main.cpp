#include <iostream>
#include <iomanip>

using namespace std;
//Вариант 3

int main()
{
	unsigned int x;
	int i;
	cin >> x >> i;

	if(x & (1 << i) == 0) cout << "i-ый бит числа равен 0";
	else cout << "i-ый бит числа равен 1";

	return 0;
}