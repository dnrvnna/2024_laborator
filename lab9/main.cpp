#include <iostream>
#include <iomanip>


using namespace std;

int sum_of_digit(int x)
{
    int s = 0;
    while (x > 0)
    {
        s += x % 10;
        x = x / 10;
    }
    return s;
}
    
    
int main()
{ 
    int n;
    cin >> n;
    int * a = new int [n];
    
    for ( int i = 0; i < n; i++) cin >> a[i];
    
    bool number_exists = false;
    
    for (int i = 0; i < n; i++)
    {
        if(sum_of_digit(a[i]) == 14)
        {
            number_exists = true;
            break;
        }
    }
    
    if (number_exists)
    {
        for( int i = 0; i < n; i++)
            for( int j = i + 1; j < n; j++)
            {
                if(a[i] > a[j]) swap(a[i], a[j]);
            }
    }
    

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	
    delete [] a;
	return 0;
}
