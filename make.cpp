#include <iostream>
#include <ctime>
#include "Matrix.hpp"

using namespace std;

int ** make(int N, int opt)
{
    srand(time(NULL));

    int **matrix = new int *[N];

    if(opt)
    {
        for(int i = 0; i < N; i++)
        {
            matrix[i] = new int [N];
            for(int j = 0; j < N; j++)
            {
                matrix[i][j] = rand() % 10;
            }
        }
    } else
    {
        for(int i = 0; i < N; i++)
        {
            matrix[i] = new int [N];
            for(int j = 0; j < N; j++)
            {
                cout<<"Input number (cords(<<"<<i<<","<<j<<"))";
                cin>>matrix[i][j];
            }
        }
    }

    show(matrix, N);

    return matrix;
}