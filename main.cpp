#include <iostream>

#include "Matrix.hpp"

using namespace std;

int main()
{
    cout<<"Make Matrix NxN\nInput N = ";
    int N;
    cin>>N;

    int opt1;
    cout<<"\nMake Matrix yourself or random (input 0 ro 1) ?";
    cin>>opt1;

    int **matrix = make(N, opt1);
}
