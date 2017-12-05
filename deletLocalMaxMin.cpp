// MODIF

#include <iostream>
#include <algorithm> 
#include <cmath>

#include "Matrix.hpp"

void deletLocalMaxMin(int **matrix, int N, int N2, int opt)
{
    int max = -pow(2,31);
    int min = pow(2,31) - 1;
    int minIndex = 0;
    int maxIndex = 0;
    bool b = true;

    if(!opt)
    {
        for(int i = 0; i < N; i++)
        {
            int j = 0;

            while(j < N2)
            {
                if(b) 
                {
                    if(matrix[i][j] > max)
                    {
                        max = matrix[i][j];
                        maxIndex = j;
                    }

                    if(matrix[i][j] < min)
                    {
                        min = matrix[i][j];
                        minIndex = j;
                    }
                } else
                {
                    if((matrix[i][j] == max) || (matrix[i][j] == min))
                    {
                        matrix[i][j] = 0;
                    }
                }

                j++;
                if((j == N2) && b)
                {
                    b = false;
                    j = minIndex > maxIndex ? maxIndex : minIndex;
                } 
            }

            max = -pow(2,31);
            min = pow(2,31) - 1;
            minIndex = 0;
            maxIndex = 0;
            b = true;
        }
    } else 
    {
        for(int i = 0; i < N; i++)
        {
            int j = 0;

            while(j < N2)
            {
                if(b) 
                {
                    if(matrix[j][i] > max)
                    {
                        max = matrix[j][i];
                        maxIndex = j;
                    }

                    if(matrix[j][i] < min)
                    {
                        min = matrix[j][i];
                        minIndex = j;
                    }
                } else
                {
                    if((matrix[j][i] == max) || (matrix[j][i] == min))
                    {
                        matrix[j][i] = 0;
                    }
                }

                j++;
                if((j == N2) && b)
                {
                    b = false;
                    j = minIndex > maxIndex ? maxIndex : minIndex;
                } 
            }

            max = -pow(2,31);
            min = pow(2,31) - 1;
            minIndex = 0;
            maxIndex = 0;
            b = true;
        }
    }
}