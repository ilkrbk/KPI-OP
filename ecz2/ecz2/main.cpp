//
//  main.cpp
//  ecz2
//
//  Created by Ilya Korobka on 13.01.2020.
//  Copyright © 2020 Ilya Korobka. All rights reserved.
//

#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int main() {
    srand((unsigned int)time(NULL));
    int numbers, sudyi;
    cout << "enter kol vo sport: ";
    cin >> numbers;
    string names[numbers];
    cout << "enter kol vo sudyi: ";
    cin >> sudyi;
    int ocenki[numbers][sudyi];
    for(int i = 0; i < numbers; ++i){
        cin >> names[i];
    }
    for(int k = 0; k < numbers; ++k){
        for (int a = 0; a < sudyi; ++a) {
            ocenki[k][a] = rand() % 10;
        }
    }
    for(int j = 0; j < numbers; ++j){
        cout << "(" << names[j] << ":";
        for (int o = 0; o < sudyi; ++o) {
            cout << " " << ocenki[j][o];
        }
        cout << ")";
    }
    cout << endl;
}
