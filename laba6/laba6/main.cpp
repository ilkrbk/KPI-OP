//
//  main.cpp
//  laba6
//
//  Created by Ilya Korobka on 08.11.2019.
//  Copyright © 2019 Ilya Korobka. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int enter(){
    int quantity;
    cout << "enter quantity triangles: ";
    cin >> quantity;
    int list = []
    for(int i = 0; i <= quantity; i++){
        cout << "b";
        cin >> list[i].b;
        cout << "a";
        cin >> list[i].a;
        cout << "deg";
        cin >> list[1];
    }
    return 0;
}

int squer(int a, int b, float alpha){
    int result;
    alpha = alpha*(3.14/180);
    result = 0.5*(a*b*sin(alpha));
    return result;
}

int main() {
    
}
