#include <iostream>

#include "Matrix.hpp"

using namespace std;

void show(int **matrix, int N)
{
    cout<<"\n";
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
}