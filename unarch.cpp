#include <iostream>

#include "Matrix.hpp"

using namespace std;

void unarch(int*** matrix, int N, int** archArr, int* archLeng, int** zeroIndexArr, int* zeloLeng)
{
    bool b = false;
    int counter = 0;
    (*matrix) = new int *[N];

    for(int i = 0; i < N; i++)
    {
        (*matrix)[i] = new int [N];
        for(int j = 0; j < N; j++)
        {
            int curentN = (i*N) + j;

            for(int k = 0; k < *zeloLeng; k++)
            {
                if((*zeroIndexArr)[k] == curentN)
                {
                    (*matrix)[i][j] = 0;
                    b = true;
                    break;
                }
            }

            if(!b)
            {
                (*matrix)[i][j] = (*archArr)[counter++];
            }
            b = false;
        }
        
    }
}