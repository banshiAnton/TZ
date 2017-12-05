#include <iostream>

#include "Matrix.hpp"

void showArr(int* arr, int N)
{
    std::cout<<"\n\n";
    for(int i = 0 ; i < N; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
}