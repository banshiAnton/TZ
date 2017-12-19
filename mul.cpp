#include <iostream>

#include "Matrix.hpp"

void mul(int*** matrix, int N1, int* N2)
{

    int N3 = 0;

    std::cout<<"\nInput colum number = ";
    std::cin>>N3;

    int opt;
    std::cout<<"\nInput item to your matrix yourself or random(0 ro 1) ?\n";
    std::cin>>opt;

    int **sumMatr = make(*N2, N3, opt);

    show(sumMatr, *N2, N3);

    int **newMatrix = new int *[N1];

    for(int i = 0; i < N1; i++)
    {
        newMatrix[i] = new int [N3];

        for(int j = 0 ; j < N3; j++)
        {
            int res = 0;

            for(int k = 0; k < *N2; k++)
            {
                res += ((*matrix)[i][k] * sumMatr[k][j]);
            }

            newMatrix[i][j] = res;
        }
    }

    delete [] (*matrix);
    *matrix = newMatrix;
    *N2 = N3;
}