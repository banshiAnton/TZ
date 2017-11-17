#include <iostream>

#include "Matrix.hpp"

using namespace std;

int main()
{
    //cout<<"Make Matrix NxN\nInput N = ";
    int N = 5;
    int N2 = 5;
    int archLeng = 0;
    int zeloLeng = 0;
    // cin>>N;

    // int opt1;
    // cout<<"\nMake Matrix yourself or random (0 ro 1) ?";
    // cin>>opt1;

    int **matrix = new int *[N];// = make(N, opt1);
    int **matrix2 = new int *[N];
    for(int i = 0; i < N; i++)
    {
        matrix[i] = new int [N];
        matrix2[i] = new int [N];
    };

    int *archArr(0);
    int *zeroIndexArr(0);

    matrix[0][0] = 0;
    matrix[0][1] = 0;
    matrix[0][2] = 5;
    matrix[0][3] = 6;
    matrix[0][4] = 8;

    matrix[1][0] = 9;
    matrix[1][1] = 7;
    matrix[1][2] = 8;
    matrix[1][3] = 0;
    matrix[1][4] = 5;

    matrix[2][0] = 9;
    matrix[2][1] = 3;
    matrix[2][2] = 5;
    matrix[2][3] = 7;
    matrix[2][4] = 8;

    matrix[3][0] = 5;
    matrix[3][1] = 0;
    matrix[3][2] = 0;
    matrix[3][3] = 3;
    matrix[3][4] = 8;

    matrix[4][0] = 7;
    matrix[4][1] = 0;
    matrix[4][2] = 0;
    matrix[4][3] = 5;
    matrix[4][4] = 1;


    matrix2[0][0] = 0;
    matrix2[0][1] = 0;
    matrix2[0][2] = 5;
    matrix2[0][3] = 6;
    matrix2[0][4] = 8;

    matrix2[1][0] = 9;
    matrix2[1][1] = 7;
    matrix2[1][2] = 1;
    matrix2[1][3] = 0;
    matrix2[1][4] = 5;

    matrix2[2][0] = 9;
    matrix2[2][1] = 3;
    matrix2[2][2] = 5;
    matrix2[2][3] = 74;
    matrix2[2][4] = 8;

    matrix2[3][0] = 5;
    matrix2[3][1] = 0;
    matrix2[3][2] = 0;
    matrix2[3][3] = 3;
    matrix2[3][4] = 8;

    matrix2[4][0] = 5;
    matrix2[4][1] = 54;
    matrix2[4][2] = 5;
    matrix2[4][3] = 5;
    matrix2[4][4] = 1;

    //sum(matrix, matrix2, N);
    show(matrix, N);

    arch(matrix, N, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);

    showArr(archArr, archLeng);

    showArr(zeroIndexArr, zeloLeng);

    unarch(&matrix, N, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);

    show(matrix, N);

    // showArr(archArr, archLeng);

    // showArr(zeroIndexArr, zeloLeng);

    // for(int i = 0 ; i < archLeng; i++)
    // {
    //     cout<<archArr[i]<<" ";
    // }

    // cout<<"\n";

    // int **matrix = {

    //     {0,0,5,6,8},
    //     {9,7,8,0,5},
    //     {9,3,5,7,8},
    //     {5,0,0,3,8},
    //     {7,0,0,5,1}

    // };
    
    //sort(matrix, N, 1, 1);

    //sort(matrix, N, 2, 0);
}
