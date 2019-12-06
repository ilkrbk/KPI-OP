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
void showMatrix(int *matrix, int a, int b);
void fillingMatrix(int *matrix, int a, int b);
void multipMatrix(int *m1[], int *m2[], int *m3[], int a, int b, int c);

int main(){
//    srand((unsigned int)time(NULL));
    int n, m, p;
    n = rand() % 4 + 1;
    m = rand() % 4 + 1;
    p = rand() % 4 + 1;
    int matrix1[n][m];
    int matrix2[m][p];
    int resultMatrix[n][p];
    fillingMatrix((int*) matrix1, n, m);
    showMatrix((int*) matrix1, n, m);
    cout << endl;
    fillingMatrix((int*) matrix2, m, p);
    showMatrix((int*) matrix2, m, p);
    cout << endl;
    multipMatrix((int**) matrix1, (int**) matrix2, (int**) resultMatrix, n, m, p);
//    showMatrix((int*) resultMatrix, m, m);
}
void fillingMatrix(int *matrix, int a, int b){
    for (int i = 0; i < a * b; i++) {
        matrix[i] = rand() % 10;
    }
}

void showMatrix(int *matrix, int a, int b){
    int count = (b-1);
    for (int i = 0; i < a * b; i++) {
        cout << matrix[i] << "\t";
        if (i == count){
            cout << endl;
            count += b;
        }
    }
}

void multipMatrix(int *m1[], int *m2[], int *m3[], int a, int b, int c){
    for (int i = 0; i < a; i++) {
        for (int k = 0; k < c; k++) {
            m3[i][k] = 0;
            for (int j = 0; j < b; j++) {
                m3[i][k] += m1[i][j] * m2[j][k];
            }
        }
    }
}

