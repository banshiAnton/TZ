#include <iostream>

#include "Matrix.hpp"

using namespace std;

void sum(int** matrix, int** matrix2, int N)
{
    int **newMatrix= new int *[N];

    for(int i = 0; i < N; i++)
    {
        newMatrix[i] = new int [N];
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
            
            newMatrix[i][j] = res;
        }
    }

    show(newMatrix, N);

    //matrix = newMatrix;

}