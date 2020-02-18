#include <iostream>
#include "modules.hpp"

using namespace std;

int main() {
    int row, col;
    cout << "enter row: ";
    cin >> row;
    cout << "enter col: ";
    cin >> col;
    int** matrix = createMatrix(row, col);
    fillingMatrix(matrix, row, col);
    showMatrix(matrix, row, col);
}
