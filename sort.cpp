// MODIF 

#include <iostream>

#include "Matrix.hpp"

void sort(int **matrix, int N1, int N2, int index, int opt)
{
    if(opt)
    {
        std::cout<<"\nSort by string index = "<<index<<"\n";
        for(int i = 1; i < N2; i++)
        {
            for(int j = 0; j < N2 - i; j++)
            {
                if(matrix[index][j] > matrix[index][j+1])
                {
                    int tmp = matrix[index][j];
                    matrix[index][j] = matrix[index][j+1];
                    matrix[index][j+1] = tmp;
                }
            }
        }
    } else
    {
        std::cout<<"\nSort by column index = "<<index<<"\n";
        for(int i = 1; i < N1; i++)
        {
            for(int j = 0; j < N1 - i; j++)
            {
                if(matrix[j][index] > matrix[j+1][index])
                {
                    int tmp = matrix[j][index];
                    matrix[j][index] = matrix[j+1][index];
                    matrix[j+1][index] = tmp;
                }
            }
        }
    }
}