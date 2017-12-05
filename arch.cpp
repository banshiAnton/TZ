// MODIF

#include <iostream>

#include "Matrix.hpp"

void arch(int **matrix, int N1, int N2, int** archArr, int* archLeng, int** zeroIndexArr, int* zeloLeng)
{
    int countOfZero = 0;

    for(int i = 0; i < N1; i++)
    {
        for(int j = 0; j < N2; j++)
        {
            if(matrix[i][j] == 0)
            {
                countOfZero++;
            }
        }
    }

    int counter1 = 0;
    int counter2 = 0;

    *zeroIndexArr = new int [countOfZero];
    *archArr = new int [(N1*N2)-countOfZero];

    for(int i = 0; i < N1; i++)
    {
        for(int j = 0; j < N2; j++)
        {

            if(matrix[i][j] == 0)
            {
                (*zeroIndexArr)[counter1++] = (i * N1) + j;
            } else
            {
                (*archArr)[counter2++] = matrix[i][j];
            }
        }
        delete [] matrix[i];
    }

    delete [] matrix;

    *archLeng = counter2;
    *zeloLeng = counter1;

}