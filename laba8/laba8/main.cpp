//
//  main.cpp
//  laba8(correct)
//
//  Created by Ilya Korobka on 02.12.2019.
//  Copyright © 2019 Ilya Korobka. All rights reserved.
//
#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;
int** createMatrix(int, int);
void showMatrix(int**, int, int);
void fillingMatrix(int**, int, int);
void multipMatrix(int**, int**, int**, int, int, int);
void cleanMatrix(int**, int);

int main(){
    srand((unsigned int)time(NULL));
    
    int n, m, p;
    n = rand() % 4 + 1;
    m = rand() % 4 + 1;
    p = rand() % 4 + 1;
    
    int** matrix1 = createMatrix(n, m);
    int** matrix2 = createMatrix(m, p);
    int** resultMatrix = createMatrix(n, p);
    
    fillingMatrix(matrix1, n, m);
    fillingMatrix(matrix2, m, p);
    
    showMatrix(matrix1, n, m);
    showMatrix(matrix2, m, p);
//    for (int i = 0; i < n; i++) {
//        for (int k = 0; k < p; k++) {
//            resultMatrix[i][k] = 0;
//            for (int j = 0; j < m; j++) {
//                resultMatrix[i][k] += matrix1[i][j] * matrix2[j][k];
//            }
//        }
//    }
    multipMatrix(matrix1, matrix2, resultMatrix, n, m, p);
    showMatrix(resultMatrix, n, p);
    cleanMatrix(matrix1, n);
    cleanMatrix(matrix2, m);
    cleanMatrix(resultMatrix, n);
}

int** createMatrix(int rows, int columns) {
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[columns];
    }
    return matrix;
}

void cleanMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    
    delete[] matrix;
}

void fillingMatrix(int** matrix, int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            matrix[i][j] = rand() % 10;
        }
    }
}

void showMatrix(int** matrix, int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << matrix[i][j] << '\t';
        }
        cout << endl;
    }
    cout << endl;
}

void multipMatrix(int** m1, int** m2, int** m3, int n, int m, int p) {
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < p; k++) {
            m3[i][k] = 0;
            for (int j = 0; j < m; j++) {
                m3[i][k] += m1[i][j] * m2[j][k];
            }
        }
    }
}

