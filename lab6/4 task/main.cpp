#include <iostream>

using namespace std;
 
bool contains_5(int x)
{
    while(x > 0)
    {
        int d = x % 10;
        if(d == 5) return true;
        x /= 10;
    }
    return false;
}

bool same_digits(int x)
{
    for(int i = x; i > 0; i/=10)
    {
        int dig = i % 10;
        for(int j = i / 10; j > 0; j /= 10)
        {
            if(dig == j % 10) return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    int* a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    
    for (int i = 0; i < n; )
    {
        if (same_digits(a[i]))
        {
            for (int j = i; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            n--; 
        } 
        else
        {
            i++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (contains_5(a[i]))
        {
            for (int j = n; j > i; j--) 
            {
                a[j] = a[j - 1]; 
            }
            a[i + 1] = a[i]; 
            n++; 
            i++; 
        }
    }

    
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    
    delete[] a;

    return 0;
}