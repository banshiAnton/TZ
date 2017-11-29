#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));

    int l1 = 4;
    int l2 = 4;
    int **matr = new int *[l1];

    cout<<"My matr =\n\n";

    for(int i = 0; i < l1; i++)
    {
        matr[i] = new int [l2];
        for(int j = 0; j < l2; j++)
        {
            matr[i][j] = rand() % 10;
            cout<<matr[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"\nPut mp =\n\n";

    int l3 = 3;
    int l4 = 3;
    int **mp = new int *[l3];

    for(int i = 0; i < l3; i++)
    {
        mp[i] = new int [l4];
        for(int j = 0; j < l4; j++)
        {
            mp[i][j] = rand() % 10;
            cout<<mp[i][j]<<" ";
        }
        cout<<"\n";
    }

    //int *strOpt = new int [1000];
    //int *rowOpt = new int [1000];

    int c1 = 0;
    int c2 = 0;

    int co1 = 2;
    int co2 = 2;

    int l1new = l1;
    int l2new = l2;

    cout<<"\nCord 1 = "<<co1;
    cout<<"\nCord 2 = "<<co2;

    cout<<"\n\nElements input in =\n\n";

    if(co1 >= l1) 
    {
        int newLeng = l1 + (co1 - l1) + l3;

        int **arr = new int* [newLeng];

        for(int i = 0; i < l1; i++)
        {
            arr[i] = new int [l2];
            for(int j = 0; j < l2; j++)
            {
                arr[i][j] = matr[i][j];
            }
        }

        for(int i = l1; i < newLeng; i++)
        {
            arr[i] = new int [l2];
            for(int j = 0; j < l2; j++)
            {
                arr[i][j] = 0;
            }
        }

        for(int i = 0; i < l1; i++)
        {
            delete [] matr[i];
        }
        delete [] matr;

        l1 = newLeng;

        matr = arr;
    } else 
    {

        bool b = false;

        for(int i = co1; (i < l1) && ((i - co1) < l3); i++)
        {
            for(int j = co2; (j < l2) && ((j - co2) < l4); j++)
            {
                //cout<<matr[i][j]<<" ";
                if(matr[i][j])
                {
                    b = true;
                    break;
                }
            }

            if(b)
            {
                int itr = 0;
                int jtr = 0;

                int **arr = new int* [++l1];
                for(int i2 = 0; i2 < l1; i2++)
                {
                    arr[i2] = new int [l2];

                    if(i2 != i)
                    {
                        for(int j2 = 0; j2 < l2; j2++)
                        {
                            arr[i2][j2] = matr[itr][jtr++];
                            //cout<<arr[i2][j2]<<" ";
                        }
                        itr++;
                        jtr = 0;
                    } else
                    {
                        for(int j2 = 0; j2 < l2; j2++)
                        {
                            arr[i2][j2] = 0;
                            //cout<<arr[i2][j2]<<" ";
                        }
                    }
                    //cout<<"\n";
                }

                for(int i3 = 0; i3 < l1-1; i3++)
                {
                    delete [] matr[i3];
                }
                delete [] matr;

                matr = arr;

            }

            //cout<<"\n";
        }

    }

    if(co2 + l4 >= l2)
    {
        int newLeng = co2 + l4;

        for(int i = 0; i < l1; i++)
        {
            int *arr = new int [newLeng];

            for(int j = 0; j < l2; j++)
            {
                arr[j] = matr[i][j];
            }

            for(int j = l2; j < newLeng; j++)
            {
                arr[j] = 0;
            }

            delete [] matr[i];

            matr[i] = arr;
        }

        l2 = newLeng;

    }

    cout<<"\n";

    for(int i = 0; i < l1; i++)
    {
        for(int j = 0; j < l2; j++)
        {
            cout<<matr[i][j]<<" ";
        }
        cout<<"\n";
    }

    for(int i = 0; i < l3; i++)
    {
        for(int j = 0; j < l4; j++)
        {
            matr[co1 + i][co2 + j] = mp[i][j];
        }
    }

    cout<<"\n";

    for(int i = 0; i < l1; i++)
    {
        for(int j = 0; j < l2; j++)
        {
            cout<<matr[i][j]<<" ";
        }
        cout<<"\n";
    }


    return 0;
}
