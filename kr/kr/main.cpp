//
//  main.cpp
//  kr
//
//  Created by Ilya Korobka on 25.10.2019.
//  Copyright © 2019 Ilya Korobka. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int limA, limB;
    int sum = 0;
    cout << "enter lim a: ";
    cin >> limA;
    cout << "enter lim b: ";
    cin >> limB;
    
    for(int k = limA; k <= limB; k++){
        if(k > 0){
            int n = k;
            for(int i = 0; n > i; n--){
                cout << n % k == 0;
                if (n % k == 0){
                    sum += k;
                    if(sum == n){
                        cout << n << "/" << endl;
                    }
                }
            }
        }
    }
}
