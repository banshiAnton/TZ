#include <iostream>

#include "Matrix.hpp"

using namespace std;

void sort(int **matrix, int N, int index, int opt)
{
    if(opt)
    {
        cout<<"\nSort by string index = "<<index<<"\n";
        for(int i = 1; i < N; i++)
        {
            for(int j = 0; j < N - i; j++)
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
        cout<<"\nSort by column index = "<<index<<"\n";
        for(int i = 1; i < N; i++)
        {
            for(int j = 0; j < N - i; j++)
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
    show(matrix, N);
}