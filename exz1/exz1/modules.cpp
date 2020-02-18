#include "modules.h"
#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

int createSize(){
    int n;
    do{
        cout << "enter n: ";
        cin >> n;
    }while((n % 2) != 1);{
        return n;
    }
}

int** createMatrix(int row, int col){
    int** matrix = new int*[row];
    for(int i = 0; i < row; ++i){
        matrix[i] = new int[col];
    }
    return matrix;
}

void fillingMatrix(int** matrix, int porad){
    srand((unsigned int)time(NULL));
    for(int i = 0; i < porad; ++i){
        for(int k = 0; k < porad; ++k){
            matrix[i][k] = rand() % 10;
        }
    }
}

void showMatrix(int** matrix, int porad){
    for(int i = 0; i < porad; ++i){
        for(int k = 0; k < porad; ++k){
            cout << matrix[i][k]<< '\t';
        }
        cout << endl;
    }
}

void findRomb(int** matrix, int n){
    int centerMatrix = n/2;
    int sum = 0;
    int max = 0;
    for(int i = 0; i < n; ++i){
        for(int k = 0; k < n; ++k){
            if (k == centerMatrix && i <= centerMatrix){
                for(int j = -i; j <= i; ++j){
                    sum += matrix[i][k + j];
                    if(max < matrix[i][k + j]){
                        max = matrix[i][k + j];
                    }
                }
            }else if(k == centerMatrix && i > centerMatrix){
                for(int o = -((n - 1) - i); o <= ((n - 1) - i); ++o){
                    sum += matrix[i][k + o];
                    if(max < matrix[i][k + o]){
                        max = matrix[i][k + o];
                    }
                }
            }
        }
    }
    cout << "summers: "<< sum << endl << "max: " << max << endl;
}



//void findRomb(int** matrix, int n){
//    int centerMatrix = n/2;
//    int sum = 0;
//    int p = 0;
//    for(int i = 0; i < centerMatrix; ++i){
//        for(int j = centerMatrix; j < n; ++j){
//            sum += matrix[i][j-p] + matrix[i][j] + matrix[i][j+p];
//        }
//        p += 1;
//    }
//    cout << sum;
//}


