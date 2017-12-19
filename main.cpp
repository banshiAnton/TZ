#include <iostream>

#include "Matrix.hpp"

using namespace std;

int main()
{

    int **matrix(0);

    int N1 = 0;
    int N2 = 0;

    int *archArr(0);
    int *zeroIndexArr(0);

    int archLeng = 0;
    int zeloLeng = 0;

    bool isArch = false;

    while(1)
    {
        cout<<"\nInput num rows of your matrix = ";
        cin>>N1;

        cout<<"\nInput num cols of your matrix = ";
        cin>>N2;

        int opt;
        cout<<"\nInput item to your matrix yourself or random(0 ro 1) ?\n";
        cin>>opt;

        matrix = make(N1, N2, opt);

        show(matrix, N1, N2);

        while(1)
        {
            bool br = false;

            int opt;
            cout<<"Do with matrix input\n0 to show\n1 to trans\n2 to delet local max and min\n3 to delet zero row and colom\n4 to archive or disarchive\n5 to sort row or colum\n6 to put another matrix to your\n7 to multime your matrix\n8 to start again\n\n";
            cin>>opt;

            switch(opt)
            {
                case 0:
                {
                    if(!isArch)
                    {
                        show(matrix, N1, N2);
                    } else
                    {
                        showArr(archArr, archLeng);
                    }

                break;
                }
                case 1:
                {
                    if(!isArch)
                    {
                        matrix = trans(&matrix, &N1, &N2);
                        show(matrix, N1, N2);
                    } else
                    {
                        unarch(&matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);
                        matrix = trans(&matrix, &N1, &N2);
                        arch(matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);
                        showArr(archArr, archLeng);
                    }

                break;
                }
                case 2:
                {  
                    if(!isArch)
                    {
                        deletLocalMaxMin(matrix, N1, N2, 0);
                        show(matrix, N1, N2);
                    } else
                    {
                        unarch(&matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);
                        deletLocalMaxMin(matrix, N1, N2, 0);
                        arch(matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);
                        showArr(archArr, archLeng);
                    }

                break;
                }
                case 3:
                {  
                    if(!isArch)
                    {
                        delet(&matrix, &N1, &N2);
                        show(matrix, N1, N2);
                    } else
                    {
                        unarch(&matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);
                        delet(&matrix, &N1, &N2);
                        arch(matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);
                        showArr(archArr, archLeng);
                    }

                break;
                }
                case 4:
                {
                    if(!isArch)
                    {
                        arch(matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);
                        showArr(archArr, archLeng);
                    } else
                    {
                        unarch(&matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);
                        show(matrix, N1, N2);
                    }

                    isArch = !isArch;

                break;
                }
                case 5:
                {
                    bool isValid = false;
                    int opt, index;

                    cout<<"\n\nRow or colum(1 or 0)\n";
                    cin>>opt;

                    while(!isValid)
                    {

                        if(opt)
                        {
                            cout<<"\n(range from 0 to "<<N1 - 1<<")\n";
                            cout<<"\nIndex = ";
                            cin>>index;
                            
                            if((index < 0) || index >= N1)
                            {
                                cout<<"\nInvalid index\n";
                                continue;
                            }

                        } else
                        {
                            cout<<"\n(range from 0 to "<<N2 - 1<<")\n";
                            cout<<"\nIndex = ";
                            cin>>index;
                            
                            if((index < 0) || index >= N2)
                            {
                                cout<<"\nInvalid index\n";
                                continue;
                            }
                        }

                        isValid = true;

                    }
 
                    if(!isArch)
                    {
                        sort(matrix, N1, N2, index, opt);
                        show(matrix, N1, N2);
                    } else
                    {
                        unarch(&matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);
                        sort(matrix, N1, N2, index, opt);
                        arch(matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);
                        showArr(archArr, archLeng);
                    }

                break;
                }
                case 6:
                {
                    int c1, c2;

                    cout<<"\nInput cord1 to put = ";
                    cin>>c1;
                    cout<<"\nInput cord2 to put = ";
                    cin>>c2;
                    if(!isArch)
                    {
                        put(&matrix, &N1, &N2, c1, c2);
                        show(matrix, N1, N2);
                    } else
                    {
                        unarch(&matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);
                        put(&matrix, &N1, &N2, c1, c2);
                        arch(matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);
                        showArr(archArr, archLeng);
                    }

                break;
                }
                case 7:
                {


                    if(!isArch)
                    {
                        mul(&matrix, N1, &N2);
                        show(matrix, N1, N2);
                    } else
                    {
                        unarch(&matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);
                        mul(&matrix, N1, &N2);
                        arch(matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);
                        showArr(archArr, archLeng);
                    }    

                break;
                }
                case 8:
                {  
                    br = true;

                break;
                }
                default:
                    cout<<"\n\n********* Invalid number *********\n\n";
                
            }

            if(br)
            {
                break;
            }
        }

        if(isArch)
        {
            unarch(&matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);
        }

        for(int i = 0; i < N1; i++)
        {
            delete [] matrix[i];
        }

        delete [] matrix;

    }

    // cin>>N;

    // int opt1;
    // cout<<"\nMake Matrix yourself or random (0 ro 1) ?";
    // cin>>opt1;

    //int **matrix = make(N1, N2, 1);


    // show(matrix, N1, N2);

    // arch(matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);

    // showArr(archArr, archLeng);

    // showArr(zeroIndexArr, zeloLeng);

    // unarch(&matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);

    // show(matrix, N1, N2);

    // delet(&matrix, &N1, &N2);

    // show(matrix, N1, N2);

    // arch(matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);

    // showArr(archArr, archLeng);

    // showArr(zeroIndexArr, zeloLeng);

    // unarch(&matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);

    // show(matrix, N1, N2);

    // deletLocalMaxMin(matrix, N1, N2, 0);

    // show(matrix, N1, N2);

    // sort(matrix, N1, N2, 2, 0);

    // show(matrix, N1, N2);

    // arch(matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);

    // showArr(archArr, archLeng);

    // showArr(zeroIndexArr, zeloLeng);

    // unarch(&matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);

    // show(matrix, N1, N2);

    // trans(matrix, N1, N2);

    // show(matrix, N1, N2);

    // put(&matrix, &N1, &N2, 2, 2);

    // show(matrix, N1, N2);

    // delet(&matrix, &N1, &N2);

    // show(matrix, N1, N2);

    // arch(matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);

    // showArr(archArr, archLeng);

    // showArr(zeroIndexArr, zeloLeng);

    // unarch(&matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);

    // show(matrix, N1, N2);

    // mul(&matrix, N1, &N2);

    // show(matrix, N1, N2);

    // deletLocalMaxMin(matrix, N1, N2, 0);

    // show(matrix, N1, N2);

    // arch(matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);

    // showArr(archArr, archLeng);

    // showArr(zeroIndexArr, zeloLeng);

    // unarch(&matrix, N1, N2, &archArr, &archLeng, &zeroIndexArr, &zeloLeng);

}
