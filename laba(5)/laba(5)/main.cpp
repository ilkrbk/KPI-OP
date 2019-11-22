//
//  main.cpp
//  laba(5)
//
//  Created by Ilya Korobka on 15.11.2019.
//  Copyright © 2019 Ilya Korobka. All rights reserved.
//

#include <iostream>

using namespace std;

bool easy(int i);

int main() {
    for(int i = 1; i < 300; i++){
        easy(i);
        if (easy(i) == true){
            cout << i << " / ";
        }
    }
}

bool easy(int i){
    bool a;
    if(i > 0){
        for(int k = 1; k < i; k++){
            if((i%k) == 0){
                a = false;
            }
            a = true;
        }
    }else{
        a = false;
    }
    return a;
}
