#include <iostream>

#include "Matrix.hpp"

using namespace std;

void arch(int **matrix, int N, int** archArr, int* archLeng, int** zeroIndexArr, int* zeloLeng)
{
    int countOfZero = 0;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
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
    *archArr = new int [(N*N)-countOfZero];

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {

            if(matrix[i][j] == 0)
            {
                (*zeroIndexArr)[counter1++] = (i * N) + j;
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