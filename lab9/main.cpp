#include <iostream>

using namespace std;

//вариант 3

int main()
{
    short a;
    cin >> a;
    
    unsigned char * p = (unsigned char * ) &a;
    
    for ( int i = 0; i < sizeof(a); i++)
    {
        int b = *(p + i);
        cout << hex << b << " ";
    }
    
    return 0;
}
