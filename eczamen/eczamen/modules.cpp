#include "modules.h"
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int** createMatrix(int n){
    int** matrix = new int*[n];
    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[n];
    }
    return matrix;
}

int** cleanMatrix(int** matrix, int n){
    for (int i = 0; i < n; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

void fillingMatrix(int** matrix, int n){
    srand((unsigned int)time(NULL));
    for (int i = 0; i < n; ++i) {
        for (int k = 0; k < n; ++k) {
            matrix[i][k] = rand() % 20 - 10;
        }
    }
}

void showMatrix(int** matrix, int n){
    cout << "output matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int k = 0; k < n; ++k) {
            cout << matrix[i][k] << '\t';
        }
        cout << endl;
    }
}

string* findMaxAndSumMatrix(int** matrix, int n){
    float sum = 0, count = 0;
    float serAref;
    float max = matrix[0][0];
    for (int i = 0; i < n; ++i) {
        for (int k = 0; k < n; ++k) {
            if (i <= k) {
                if (max < matrix[i][k]) {
                    max = matrix[i][k];
                }
                sum += matrix[i][k];
                count++;
            }
        }
    }
    serAref = sum / count;
    string mus[] = {to_string(max), to_string(serAref), to_string(sum)};
    cout << "output: max, serAref, sum: ";
    for (int j = 0; j < 3; ++j) {
        cout << mus[j] << " ";
    }
    cout << endl;

    return mus;
}
