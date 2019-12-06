//
//  main.cpp
//  laba8
//
//  Created by Ilya Korobka on 22.11.2019.
//  Copyright © 2019 Ilya Korobka. All rights reserved.
//

#include <iostream>
#include <ctime>

using namespace std;

//void screenOut(int** matrix, int n, int m);

int main(){
    srand((unsigned int)time(NULL));
    int n, m, p;
    n = rand() % 4 + 1;
    m = rand() % 4 + 1;
    p = rand() % 4 + 1;
    int matrix1[n][m];
    
    for (int i = 0; i < n; i++){
        for (int k = 0; k < m; k++) {
            matrix1[i][k] = rand() % 100 + 1;
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++){
        for (int k = 0; k < m; k++) {
            cout << matrix1[i][k] << "\t";
        }
        cout << endl;
    }
//    screenOut(matrix1, n, m);
}

//void screenOut(int** matrix, int n, int m){
//    for (int i = 0; i < n; i++){
//        for (int k = 0; k < m; k++) {
//            cout << matrix[i][k] << "\t";
//        }
//        cout << endl;
//    }
//}

