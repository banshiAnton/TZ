#include <iostream>

#include "Matrix.hpp"

using namespace std;

void put(int*** matrix, int *N1, int *N2, int co1, int co2)
{

    int l3;
    int l4;

    cin>>l3;
    cout<<"\n";

    cin>>l4;

    cout<<"\n";

    int **inputMatr = make(l3, 1);

    if(co1 >= *N1) 
    {
        int newLeng = *N1 + (co1 - *N1) + l3;

        int **arr = new int* [newLeng];

        for(int i = 0; i < *N1; i++)
        {
            arr[i] = new int [*N2];
            for(int j = 0; j < *N2; j++)
            {
                arr[i][j] = (*matrix)[i][j];
            }
        }

        for(int i = *N1; i < newLeng; i++)
        {
            arr[i] = new int [*N2];
            for(int j = 0; j < *N2; j++)
            {
                arr[i][j] = 0;
            }
        }

        for(int i = 0; i < *N1; i++)
        {
            delete [] (*matrix)[i];
        }
        delete [] (*matrix);

        *N1 = newLeng;

        (*matrix) = arr;
    } else 
    {

        bool b = false;

        for(int i = co1; (i < *N1) && ((i - co1) < l3); i++)
        {
            for(int j = co2; (j < *N2) && ((j - co2) < l4); j++)
            {
                //cout<<matr[i][j]<<" ";
                if((*matrix)[i][j])
                {
                    b = true;
                    break;
                }
            }

            if(b)
            {
                int itr = 0;
                int jtr = 0;

                int **arr = new int* [++(*N1)];
                for(int i2 = 0; i2 < *N1; i2++)
                {
                    arr[i2] = new int [*N2];

                    if(i2 != i)
                    {
                        for(int j2 = 0; j2 < *N2; j2++)
                        {
                            arr[i2][j2] = (*matrix)[itr][jtr++];
                            //cout<<arr[i2][j2]<<" ";
                        }
                        itr++;
                        jtr = 0;
                    } else
                    {
                        for(int j2 = 0; j2 < *N2; j2++)
                        {
                            arr[i2][j2] = 0;
                            //cout<<arr[i2][j2]<<" ";
                        }
                    }
                    //cout<<"\n";
                }

                for(int i3 = 0; i3 < *N1-1; i3++)
                {
                    delete [] (*matrix)[i3];
                }
                delete [] (*matrix);

                (*matrix) = arr;

            }

            //cout<<"\n";
        }

    }

    if(co2 + l4 >= *N2)
    {
        int newLeng = co2 + l4;

        for(int i = 0; i < *N1; i++)
        {
            int *arr = new int [newLeng];

            for(int j = 0; j < *N2; j++)
            {
                arr[j] = (*matrix)[i][j];
            }

            for(int j = *N2; j < newLeng; j++)
            {
                arr[j] = 0;
            }

            delete [] (*matrix)[i];

            (*matrix)[i] = arr;
        }

        *N2 = newLeng;

    }

    cout<<"\n";

    for(int i = 0; i < l3; i++)
    {
        for(int j = 0; j < l4; j++)
        {
            (*matrix)[co1 + i][co2 + j] = inputMatr[i][j];
        }
    }

    cout<<"\n";
}