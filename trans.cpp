#include <iostream>

#include "Matrix.hpp"

using namespace std;

void trans(int*** matrix, int N, int N2)
{
    for(int i = 0 ; i < N; i++)
    {
        for(int j = i + 1 ; j < N2; j++)
        {
            int tmp = (*matrix)[i][j];
            (*matrix)[i][j] = (*matrix)[j][i];
            (*matrix)[j][i] = tmp;
        }
    }

    for(int i = 0 ; i < N; i++)
    {
        for(int j = 0 ; j < N2; j++)
        {
            cout<<(*matrix)[i][j]<<" ";
        }
        cout<<"\n";
    }
}