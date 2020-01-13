#include <iostream>
#include "modules.h"

using namespace std;

int main() {
    int n = createSize();
    int** matrix = createMatrix(n, n);
    fillingMatrix(matrix, n);
    showMatrix(matrix, n);
    cout << endl;
    findRomb(matrix, n);
}
























//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//int** createMatrix(int, int);
//void fillingMatrix(int**, int);
//void showMatrix(int**, int);
//int findSumUnderLine(int**, int);
//void findSArefUnderLine(int**, int);
//
//int main() {
//    int a;
//    cin >> hex >> a;
//    cout << oct << a;
//
////    srand((unsigned int)time(NULL));
////    int n;
////    cout << "enter n: ";
////    cin >> n;
////    int** matrix1 = createMatrix(n, n);
////    int** matrix2 = createMatrix(n, n);
////    int** matrix3 = createMatrix(n, n);
////    fillingMatrix(matrix1, n);
////    fillingMatrix(matrix2, n);
////    fillingMatrix(matrix3, n);
////    showMatrix(matrix1, n);
////    cout << endl;
////    showMatrix(matrix2, n);
////    cout << endl;
////    showMatrix(matrix3, n);
////    cout << endl;
////    findSumUnderLine(matrix1, n);
//}
//
//int** createMatrix(int row, int col){
//    int** matrix = new int*[row];
//    for(int i = 0; i < row; ++i){
//        matrix[i] = new int[col];
//    }
//    return matrix;
//}
//
//void fillingMatrix(int** matrix, int porad){
//    for(int i = 0; i < porad; ++i){
//        for(int k = 0; k < porad; ++k){
//            matrix[i][k] = rand() % 10;
//        }
//    }
//}
//
//void showMatrix(int** matrix, int porad){
//    for(int i = 0; i < porad; ++i){
//        for(int k = 0; k < porad; ++k){
//            cout << matrix[i][k] << '\t';
//        }
//        cout << endl;
//    }
//}
//
//int findSumUnderLine(int** matrix, int porad){
//    int count = 0;
//    for(int i = 0; i < porad; ++i){
//        for(int k = 0; k < porad; ++k){
//            if(i < k){
//                count += matrix[i][k];
//            }
//        }
//    }
//    cout << count;
//    return count;
//}
//
//void findSArefUnderLine(int** matrix, int porad){
//    int sum = findSumUnderLine(matrix, porad);
//}
