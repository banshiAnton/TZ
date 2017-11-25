#include <iostream>

#include "Matrix.hpp"

using namespace std;

void delet(int*** matrix, int* N, int *N2)
{
    int i,j;

    int **tempArr = new int *[*N];
    for(i = 0; i < *N; i++)
    {
        for(j = 0; j < *N2; j++)
        {
            tempArr[i] = new int [*N2];
        }
    }

    bool b;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;

    for(i = 0; i < *N; i++)
    {
        b = false;

        for(j = 0; j < *N2; j++)
        {
            if((*matrix)[i][j]) 
            {
                b = true;
                break;
            }
        }

        if(b)
        {
            for(j = 0; j < *N2; j++)
            {
                tempArr[c1][j] = (*matrix)[i][j];
            }
            c1++;
            c2 = c1;
        }

    }

    for(; c1 < *N; c1++) 
    {
        delete [] tempArr[c1];
    }

    for(i = 0; i < *N; i++)
    {
        delete [] (*matrix)[i];
    }

    delete [] (*matrix);

    (*matrix) = new int * [c2];

    for(i = 0; i < c2; i++)
    {
        (*matrix)[i] = new int [*N2];
    }

    c1 = 0;

    for(j = 0; j < *N2; j++)
    {
        b = false;

        for(i = 0; i < c2; i++)
        {
            if(tempArr[i][j])
            {
                b = true;
                break;
            }
        }

        if(b)
        {
            for(i = 0; i < c2; i++)
            {
                (*matrix)[i][c1] = tempArr[i][j];
            }
            c1++;
            c3 = c1;
        }
    }

    for(i = 0; i < c2; i++)
    {
        for(j = 0; j < c3; j++)
        {
            cout<<(*matrix)[i][j]<<" ";
        }
        cout<<endl;
    }

    *N = c2;
    *N2 = c3;  

}