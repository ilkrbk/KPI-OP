//
//  main.cpp
//  exz
//
//  Created by Ilya Korobka on 12.01.2020.
//  Copyright © 2020 Ilya Korobka. All rights reserved.
//

#include <iostream>
#include <ctime>

using namespace std;

int** createMatrix(int, int);
void fillingMatrix(int**, int, int);
void showMatrix(int**, int, int);
void mirrowMatrix(int**, int**, int, int);
int** delRowMatrix(int**, int, int, int);

int main() {
    srand((unsigned int)time(NULL));
    int row, column;
    cout << "enter row: ";
    cin >> row;
    cout << "enter column: ";
    cin >> column;
    int** matrix = createMatrix(row, column);
    fillingMatrix(matrix, row, column);
    showMatrix(matrix, row, column);
    int** matrixTransform = createMatrix(column, row);
    cout << endl;
    mirrowMatrix(matrixTransform, matrix, column, row);
    showMatrix(matrixTransform, column, row);
    int numberColDel;
    cout << "enter number col for deleted: ";
    cin >> numberColDel;
    int** delColMatrixTransform = delRowMatrix(matrixTransform, column, row, numberColDel);
    showMatrix(delColMatrixTransform, column, (row-1));
}

int** createMatrix(int row, int column){
    int** matrix = new int*[row];
    for (int i = 0; i < row; ++i) {
        matrix[i] = new int[column];
    }
    return matrix;
}

void fillingMatrix(int** matrix, int row, int column){
    for(int i = 0; i < row; ++i){
        for(int k = 0; k < column; ++k){
            matrix[i][k] = rand() % 10;
        }
    }
}

void showMatrix(int** matrix, int row, int column){
    for(int i = 0; i < row; ++i){
        for(int k = 0; k < column; ++k){
            cout << matrix[i][k] << '\t';
        }
        cout << endl;
    }
}

void mirrowMatrix(int** matrixTransform, int** matrix, int column, int row){
    for(int i = 0; i < column; ++i){
        for(int k = 0; k < row; ++k){
            matrixTransform[i][k] = matrix[k][i];
        }
    }
}

int** delRowMatrix(int** matrixTransform, int column, int row, int numberColDel){
    int** matrix100 = createMatrix(column, (row-1));
    for(int i = 0; i < column; ++i){
        for(int k = numberColDel-1; k < row - 1; ++k){
            matrixTransform[i][k]=matrixTransform[i][k+ 1];
        }
    }
    for(int i = 0; i < column; ++i){
        for(int k = 0; k < row - 1; ++k){
            matrix100[i][k]=matrixTransform[i][k];
        }
    }
    return matrix100;
}

