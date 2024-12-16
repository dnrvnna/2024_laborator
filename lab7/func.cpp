#include <iostream>

using namespace std;

int ** Create_and_Read(int n)
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
void Delete(int ** A, int n)
{
    for(int i = 0; i < n; i++)
        delete [] A[i];
    delete [] A;
}
void Print(int ** A, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
}
bool Diag_elem_contains_3_or_5(int ** A, int n)
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
bool Check_Diagonal(int ** A, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(A[i][i] <= 0 || !Diag_elem_contains_3_or_5(A, n)) return false;
    }
    return true;
}
void Replace_min_elem_sum_squares(int ** A,int n)
{
    for(int j = 0; j < n; j++)
    {
        int min_i = -1;
        int min_element = 1000000;
        int sum_of_squares = 0;
        for(int i = 0; i < n; i++)
        {
            sum_of_squares += (A[i][j] * A[i][j]);
            if(A[i][j] < min_element)
            {
                min_element = A[i][j];
                min_i = i;
            }
            if(min_i != -1)
            {
                A[min_i][j] = sum_of_squares;
            }
        }
    }
}