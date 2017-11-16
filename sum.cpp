#include <iostream>

#include "Matrix.hpp"

using namespace std;

void sum(int** matrix, int** matrix2, int N)
{
    int **newM = new int *[N];

    for(int i = 0; i < N; i++)
    {
        newM[i] = new int [N];
    }

    


    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            int res = 0;

            for(int k = 0; k < N; k++)
            {
                res += (matrix[i][k] * matrix2[k][j]);
            }

            newM[i][j] = res;

        }
    }

    show(newM, N);
}