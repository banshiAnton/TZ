// MODIF 

#include <iostream>

#include "Matrix.hpp"

int ** trans(int*** matrix, int *N, int *N2)
{
    /*for(int i = 0 ; i < N; i++)
    {
        for(int j = i + 1 ; j < N2; j++)
        {
            int tmp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = tmp;
        }
    }*/

    int** matrT = new int *[*N2];
    for(int i = 0; i < *N2; i++)
    {
        matrT[i] = new int [*N];
        for(int j = 0; j < *N; j++)
        {
            matrT[i][j] = (*matrix)[j][i];
        }
    }

    for(int i = 0; i < *N; i++)
    {
        delete [] (*matrix)[i];
    }

    delete [] (*matrix);

    int tmp = *N;
    *N = *N2;
    *N2 = tmp;

    return matrT;
}