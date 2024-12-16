#include <iostream>
#include "func.hpp"
#include <locale.h>
using namespace std;

//Вариант 3


int main()
{   
    setlocale(LC_ALL, "Russian");
    int n;
    cin >> n;

    int ** A = create_and_fill_array(n);

    if(diagonal_elements_positive(A, n) && diag_elem_contains_3_or_5(A, n))
    {
        for (int j = 0; j < n; j++)
        {
            int b = sum_squares_in_column(A, n, j);
            replace_min_in_columns(A, n, b);
        }
    }

    print_array(A, n);
    delete_array(A, n);
    return 0;
}