//
//  main.cpp
//  laba3
//
//  Created by Ilya Korobka on 10/11/19.
//  Copyright © 2019 Ilya Korobka. All rights reserved.
//

#include <iostream>                                                         // include librery
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int accuracy, lim;                                                              // creating variables
    double valueX, result;
    do{                                                                             // cycle do performs an action and check condition cycle while
        cout << "enter accuracy value > 0: ";
        cin >> accuracy;
        cout << "enter lim cycle: ";
        cin >> lim;
        cout << "enter value x (deg): ";
        cin >> valueX;
    }while (lim <= 0 || accuracy < 0);{                                             // if condition true => do cycle
        result = valueX*(3.14/180);
        if(lim > 1){
            for(int k = 1; k < lim; k++){                                           // cycle filling variable sum
                result += (pow(-1, k)*(result*pow(result, 2)))/(((2*k)+1)*(2*k));
            }
        }
        result = sin(result);
        cout << fixed << setprecision(accuracy) << "sin x = " << result << endl;    // output result
        
    }
}
