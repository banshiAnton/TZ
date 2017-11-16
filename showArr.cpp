#include <iostream>

#include "Matrix.hpp"

using namespace std;

void showArr(int* arr, int N)
{
    cout<<"\n";
    for(int i = 0 ; i < N; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}