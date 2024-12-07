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

int max_digit(int x)
{
    int maximum = 0;
    while(x > 0)
    {
        int d = x % 10;
        if(d > maximum) maximum = d;
    }
    return maximum;
}

int first_digit(int x)
{
    while(x > 9) x = x / 10;
    return x;
}

    
int main()
{ 
    int n;
    cin >> n;
    int * a = new int [n];
    
    for ( int i = 0; i < n; i++) cin >> a[i];
    
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            int c = first_digit(a[i]);
            int d = first_digit(a[j]);
            if(c > d) swap(a[i], a[j]);
            else
            {
                if(c == d)
                {
                    int h = max_digit(a[i]);
                    int y = max_digit(a[j]);
                    if(h > y) swap(a[i], a[j]);
                    else
                    {
                        if(h = y)
                        {
                            if(a[i] == a[j]) swap(a[i], a[j]);
                        }
                    }
                }
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
