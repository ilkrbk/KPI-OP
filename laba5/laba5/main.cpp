//
//  main.cpp
//  laba5
//
//  Created by Ilya Korobka on 30.10.2019.
//  Copyright © 2019 Ilya Korobka. All rights reserved.
//

#include <iostream>                                         // include library
#include <cmath>


using namespace std;

int paloindrom(int num,int count){                          // func palindrom
    string str = "";                                        // variable for convert. num in str
    int sum = 0;                                            // variable for check if
    str = to_string(num);                                   // convert num in str
    for(int i = 0; i < str.length();){                      // cycle for busting str
        do{
            i++;
        } while (str[i] != str[str.length()-(i+1)]);{       // cycle for check elem num
            sum++;
            if(sum == str.length()){                        // check if sum == length str
                int num2 = pow(num, 2);
                count++;
                if(count < 2){                              // recursion exit check
                    paloindrom(num2, count);                // recursion
                }else{
                    cout << pow(num, 0.5) << "/";           // output result
                    return num;
                }
            }
        }
    }
    return num;
}

int main() {
    int lim;                                                // variable lim for stop cycle
    cout << "enter lim search to palindroma: ";
    cin >> lim;                                             // enter lim
    for(int k = 1; k <= lim; k++){                          // cycle
        int count = 0;
        paloindrom(k, count);                               // call func
    }
    cout << endl;
}
