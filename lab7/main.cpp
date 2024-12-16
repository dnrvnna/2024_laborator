#include <iostream>
#include "func.hpp"

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ** A = Create_and_Read(n);
    
    if(Check_Diagonal(A, n))
    {
        Replace_min_elem_sum_squares(A, n);
    }
    
    Print(A, n);
    Delete(A, n);
    return 0;
}