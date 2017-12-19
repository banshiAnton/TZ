// MODIF 

#include <iostream>

#include "Matrix.hpp"

void show(int **matrix, int N1, int N2)
{
    std::cout<<"\n\n";
    for(int i = 0; i < N1; i++)
    {
        for(int j = 0; j < N2; j++)
        {
            std::cout<<matrix[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    std::cout<<"\n";
}