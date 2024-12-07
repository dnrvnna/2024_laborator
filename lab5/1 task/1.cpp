#include <iostream>
#include <iomanip>
#include <climits>

using namespace std;

//вариант 3

int main()
{ 
    int n;
    cin >> n;
    
    int pro = 1;
    int minimum = INT_MAX;
    int i_min = -1;
    
    
    for (int i = 1; i <= n; )
    {
        int a;
        cin >> a;
        if ( a >= -2 && a <= 20)
        {
            pro *= a;
            if(a < minimum)
                minimum = a;
                i_min = i;
        }
        i++;
    }
    
    cout << "The product of numbers: " << pro << endl;
    cout << "Minimum number: " << i_min << ") " << minimum;
	return 0;
}
