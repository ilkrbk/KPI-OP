//
//  main.cpp
//  laba4
//
//  Created by Ilya Korobka on 25.10.2019.
//  Copyright © 2019 Ilya Korobka. All rights reserved.
//

#include <iostream>                                     // include librery
#include <cmath>

using namespace std;

int main() {
    int lim, valueX;                                    // creative vareables
    long double sum = 0;                                // creative variable for summetion cycle
    do{                                                 // cycle do perform an action and check condition cycle while
        cout << "enter lim: ";
        cin >> lim;
        cout << "enter valueX: ";
        cin >> valueX;
    }while(lim <= 0);{
        for(int i = 1; i <= lim; i++){                  // cycle for summetion sequence
            int a = i;
            sum += pow(-1, ++a)*(pow(valueX, i)/i);
        }
    }
    cout << "result" << sum <<endl;                     // output result
}
