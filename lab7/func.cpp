#include <iostream>
#include <iomanip>
#include "func.hpp"

using namespace std;

int ** create_and_fill_array(int& n)
{
    int ** A = new int * [n];
    
    for ( int i = 0; i < n; i++)
    {
        A[i] = new int [n];
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];
    
    return A;
}

void delete_array(int ** A, int& n)
{
    for(int i = 0; i < n; i++)
        delete [] A[i];
    delete [] A;
}

bool diagonal_elements_positive(int ** A, int& n)
{
    for (int k = 0; k < n; k++)
        if (A[k][k] <= 0) return false;
    return true;
}

bool diag_elem_contains_3_or_5(int ** A, int& n)
{
    for (int k = 0; k < n; k++)
    {
        while(A[k][k] > 0)
        {
            int d = A[k][k] % 10;
            if(d == 3 || d == 5) return true;
            A[k][k] /= 10;
        }    
    }
    return false;
}

int min_in_column(int ** A, int n, int& k)
{
    int minimum = 100000000;
    for(int i = 0; i < n; i++)
        if(A[i][k] < minimum) minimum = A[i][k];

    return minimum;
}

void replace_min_in_columns(int ** A, int& n, int& x)
{
    for(int j = 0; j < n; j++)
        {
            int minimum = min_in_column(A, n, j);
            for(int i = 0; i < n; i++)
            {
                if(A[i][j] == minimum) A[i][j] = x;
            }
        }
}

int sum_squares_in_column(int ** A, int& n, int& k)
{
    int summa = 0;
    for(int i = 0; i < n; i++) summa += (A[i][k] * A[i][k]);
    return summa;
}

void print_array(int ** A, int& n)
{
    for (int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
                cout << A[i][j] << "\t";
        
            cout << endl;
        }
} 
