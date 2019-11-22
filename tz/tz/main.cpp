//
//  main.cpp
//  tz
//
//  Created by Ilya Korobka on 20.11.2019.
//  Copyright © 2019 Ilya Korobka. All rights reserved.
//

#include <iostream>

using namespace std;

int main(){
    for(int i = 1; i <= 5; i++){
        for(int k = 1; k <= 5; k++){
            if (i == k || i == 6-k){
                cout << "*";
            }else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}
