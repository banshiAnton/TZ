#include <iostream>

#include "Matrix.hpp"

using namespace std;

void delet(int*** matrix, int* N, int* N2);
{
    int counterOfZero = 0;
    int** delArr(0);
    int n = *N;

    for(int i = 0; i < *N; i++)
    {
        for(int j = 0; j < *N; j++)
        {
            if((*matrix)[i][j] == 0)
            {
                counterOfZero++;
            }
        }

        if(counterOfZero == *N)
        {
            n--;
            delArr = new int *[n];
            for(int k = 0; k < *N; k++)
            {
                for(int g = 0; g < *N; g++)
                {
                    
                }
            }
        }
    }

}