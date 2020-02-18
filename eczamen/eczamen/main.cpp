#include <iostream>
#include "modules.h"
#include <string>

using namespace std;

int main() {
    // ввод порядка матрицы int
    int n;
    cout << "enter n: ";
    cin >> n;
    // функции: создание матрицы / наполнение матрицы / ввывод
    int** matrix1 = createMatrix(n);
    fillingMatrix(matrix1, n);
    showMatrix(matrix1, n);
    int** matrix2 = createMatrix(n);
    fillingMatrix(matrix2, n);
    showMatrix(matrix2, n);
    int** matrix3 = createMatrix(n);
    fillingMatrix(matrix3, n);
    showMatrix(matrix3, n);
    // функция нахождения: максимального, суму, среднее ариф. елемента
    string* mus1 = findMaxAndSumMatrix(matrix1, n);
    string* mus2 = findMaxAndSumMatrix(matrix2, n);
    string* mus3 = findMaxAndSumMatrix(matrix3, n);
    cleanMatrix(matrix1, n);
    cleanMatrix(matrix2, n);
    cleanMatrix(matrix3, n);
}
