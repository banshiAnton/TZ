// MODIF 

#include <iostream>
#include <ctime>

#include "Matrix.hpp"

int ** make(int N1, int N2, int opt)
{
    srand(time(NULL));

    int **matrix = new int *[N1];

    if(opt)
    {
        for(int i = 0; i < N1; i++)
        {
            matrix[i] = new int [N2];
            for(int j = 0; j < N2; j++)
            {
                matrix[i][j] = rand() % 10;
            }
        }
    } else
    {
        for(int i = 0; i < N1; i++)
        {
            matrix[i] = new int [N2];
            for(int j = 0; j < N2; j++)
            {
                std::cout<<"Input number (cords(<<"<<i<<","<<j<<"))";
                std::cin>>matrix[i][j];
            }
        }
    }

    return matrix;
}