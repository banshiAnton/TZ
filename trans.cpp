// MODIF 

#include <iostream>

#include "Matrix.hpp"

void trans(int** matrix, int N, int N2)
{
    for(int i = 0 ; i < N; i++)
    {
        for(int j = i + 1 ; j < N2; j++)
        {
            int tmp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = tmp;
        }
    }
}