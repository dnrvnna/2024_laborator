#include <iostream>
#include <iomanip>
#include <climits>

using namespace std;


int main()
{ 
    int n;
    cin >> n;
    
    int i;
    
    int sum = 0;
    while (n > 0)
    {
        i = n % 10;
        if (n % 2 == 0)
        {
            sum += i;
        }
        n /= 10;
    }
    
    cout << "The sum of even digits: " << sum << endl;
	return 0;
}