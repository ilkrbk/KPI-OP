#include "modules.hpp"
#include <iostream>
#include <ctime>

using namespace std;

int** createMatrix(int row, int col){
    int** matrix = new int*[row];
    for (int i = 0; i < row; ++i) {
        matrix[i] = new int[col];
    }
    return matrix;
}

void fillingMatrix(int** matrix, int row, int col){
    srand((unsigned int)time(NULL));
    for (int i = 0; i < row; ++i) {
        for (int k = 0; k < col; ++k) {
            matrix[i][k] = rand() % 10;
        }
    }
}

void showMatrix(int** matrix, int row, int col){
    for (int i = 0; i < row; ++i) {
        for (int k = 0; k < col; ++k) {
            cout << matrix[i][k] << '\t';
        }
        cout << endl;
    }
}
