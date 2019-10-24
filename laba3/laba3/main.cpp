//
//  main.cpp
//  laba3
//
//  Created by Ilya Korobka on 10/11/19.
//  Copyright © 2019 Ilya Korobka. All rights reserved.
//

#include <iostream>                                                         // include librery
#include <cmath>

using namespace std;

long factorial(long n) {                                                    // function that counts the factorial of n
    long result = 1;
    for(int k = 1; k <= n; k++){
        result *= k;
    }
    return result;
}

int main() {
    long double accuracy, lim, valueX, result;                              // creating variables
    long double sum = 0;                                                    // creative variables for summetion cycle
    string str = "1";
    int zeroo;
    do{                                                                     // cycle do performs an action and check condition cycle while
        cout << "enter accuracy value > 0: ";
        cin >> accuracy;
        cout << "enter lim cycle: ";
        cin >> lim;
        cout << "enter value x (rad): ";
        cin >> valueX;
    }while (lim < 0 || valueX >= 1 || valueX <= -1 || accuracy < 0);{       // if condition true => do cycle
        for(int k = 0; k <= lim; k++){                                      // cycle filling variable sum
            sum += pow(-1, k)*(pow(valueX, (2*k)+1))/factorial((2*k)+1);
        }
        for(int i = 0; i < accuracy; i++){                                  // cycle for changing value
            str += "0";
        }
        zeroo = stoi(str);                                                  // convertion to int
        result = round(sin(sum)* zeroo)/zeroo;                              // finding accuracy
    }
    cout << "x = " << sum << endl << "sin x = " << result << endl;          // output reesult
}

