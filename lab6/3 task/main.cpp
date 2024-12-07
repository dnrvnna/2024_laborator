#include <iostream>

using namespace std;



int main()
{
    int n, m;
    cin >> n >> m;

    int ** A = new int * [n];

    for(int i = 0; i < n; i++)
        A[i] = new int [m];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> A[i][j];
    
    int minim = 10000;
    int j_min = -1;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            if(A[i][j] < minim)
            {
                minim = A[i][j];
                j_min = j;
            }
        }

    for(int i = 0; i < n; i++)
    {
        if(A[i][j_min] < 0)
            A[i][j_min] = 0;
    }


    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cout << A[i][j] << "\t";
        cout << endl;
    }
    for(int i = 0; i < n; i++)
        delete [] A[i];
    
    delete [] A;

    return 0;
}