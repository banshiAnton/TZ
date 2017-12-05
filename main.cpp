#include <iostream>

#include "Matrix.hpp"

int main()
{
    //cout<<"Make Matrix NxN\nInput N = ";
    int N1 = 5;
    int N2 = 5;

    int *archArr(0);
    int *zeroIndexArr(0);

    int archLeng = 0;
    int zeloLeng = 0;

    bool isArch = false;

    // cin>>N;

    // int opt1;
    // cout<<"\nMake Matrix yourself or random (0 ro 1) ?";
    // cin>>opt1;

    int **matrix = make(N1, N2, 1);


    show(matrix, N1, N2);

    arch(matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);

    showArr(archArr, archLeng);

    showArr(zeroIndexArr, zeloLeng);

    unarch(&matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);

    show(matrix, N1, N2);

    delet(&matrix, &N1, &N2);

    show(matrix, N1, N2);

    arch(matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);

    showArr(archArr, archLeng);

    showArr(zeroIndexArr, zeloLeng);

    unarch(&matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);

    show(matrix, N1, N2);

    deletLocalMaxMin(matrix, N1, N2, 0);

    show(matrix, N1, N2);

    sort(matrix, N1, N2, 2, 0);

    show(matrix, N1, N2);

    arch(matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);

    showArr(archArr, archLeng);

    showArr(zeroIndexArr, zeloLeng);

    unarch(&matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);

    show(matrix, N1, N2);

    trans(matrix, N1, N2);

    show(matrix, N1, N2);

    put(&matrix, &N1, &N2, 2, 2);

    show(matrix, N1, N2);

    delet(&matrix, &N1, &N2);

    show(matrix, N1, N2);

    arch(matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);

    showArr(archArr, archLeng);

    showArr(zeroIndexArr, zeloLeng);

    unarch(&matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);

    show(matrix, N1, N2);

    mul(&matrix, N1, &N2);

    show(matrix, N1, N2);

    deletLocalMaxMin(matrix, N1, N2, 0);

    show(matrix, N1, N2);

    arch(matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);

    showArr(archArr, archLeng);

    showArr(zeroIndexArr, zeloLeng);

    unarch(&matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);

    show(matrix, N1, N2);
}
