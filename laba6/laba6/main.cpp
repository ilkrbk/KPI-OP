//
//  main.cpp
//  laba6
//
//  Created by Ilya Korobka on 08.11.2019.
//  Copyright © 2019 Ilya Korobka. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

float squer(float a, float b, float alpha);
float enter(int n, float listSqr[]);
float maximum(float list[], int elems);

int main() {
    srand((unsigned int)time(NULL));
    int n;
    cout << "enter n: ";
    cin >> n;
    float list[n];
    enter(n, list);
    maximum(list, n);
    cout << maximum(list, n) << endl;
}
float maximum(float list[], int elems){
    float max = list[0];
    for(int k = 0; k < elems; k++){
        if(list[k] > max){
            max = list[k];
        }
    }
    return max;
}
float squer(float a, float b, float alpha){
    float result;
    alpha = alpha*(3.14/180);
    result = 0.5*(a*b*sin(alpha));
    return result;
}
float enter(int n, float listSqr[]){
    for(int i = 0; i < n; i++){
        float a, b, alpha;
        a = rand() % 50 + 1;
        b = rand() % 50 + 1;
        alpha = rand() % 179 + 1;
        listSqr[i] = squer(a, b, alpha);
    }
    return 0;
}
