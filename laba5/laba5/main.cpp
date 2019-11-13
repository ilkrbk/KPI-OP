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

/* =============== 1 variant to math oparetion =============== */

int palindrom(int num, int countForExit);                           // init func

int main() {
    int lim;                                                        // creat variable lim
    cout << "enter lim search to palindroma: ";
    cin >> lim;                                                     // enter lim
    for (int i = 1; i < lim; i++){                                  // cycle for
        int count = 0;
        palindrom(i, count);                                        // call func
    }
    cout << endl;
}

int palindrom(int num, int countForExit){                           // func palindrom
    int resultSum = 0,                                              // create vareable
        count = 1,
        numRename = num;
    while (numRename /= 10) ++count;                                // cycle check how many elem
        int countRename = count;
    for (int k = 1; k <= count; k++){                               // cycle
        int kk = k,
            side1 = pow(10, kk),
            side2 = pow(10, countRename--),
            conditionSide1 = (num % side1)/pow(10, kk-1),
            conditionSide2 = (num % side2)/pow(10, countRename);
        if (conditionSide1 == conditionSide2) resultSum++;
    }
    if (resultSum == count){                                        // if condition
        int sqrNum = pow(num, 2);
        countForExit++;
        if (countForExit < 2){
            palindrom(sqrNum, countForExit);
        }else{
            cout << pow(num, 0.5) << " / ";
        }
    }
    return num;
}

/* =============== 2 variant to work with str =============== */

/*
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
*/
