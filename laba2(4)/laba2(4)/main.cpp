//
//  main.cpp
//  laba2(4)
//
//  Created by Ilya Korobka on 10/9/19.
//  Copyright © 2019 Ilya Korobka. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c;
    do{
        cout << "enter a ";
        cin >> a;
        cout << "enter b ";
        cin >> b;
        cout << "enter c ";
        cin >> c;
        cout << endl;
    } while (a + b <= c || b + c <= a || c + a <= b || a <= 0 || b <= 0 || c <= 0);{
        if((pow(a, 2)+pow(b, 2)) < pow(c,2)){
            cout << "тогда угол С тупой" << endl << "тогда угол A  острый" << endl << "тогда угол B острый" << endl;
        }else if((pow(b, 2)+pow(c, 2)) < pow(a,2)){
            cout << "тогда угол A тупой" << endl << "тогда угол B  острый" << endl << "тогда угол C острый" << endl;
        }else if((pow(c, 2)+pow(a, 2)) < pow(b,2)){
            cout << "тогда угол B тупой" << endl << "тогда угол C  острый" << endl << "тогда угол A острый" << endl;
        }else if((pow(a, 2)+pow(b, 2)) == pow(c,2)){
            cout << "тогда угол С прямой" << endl << "тогда угол A  острый" << endl << "тогда угол B острый" << endl;
        }else if((pow(b, 2)+pow(c, 2)) == pow(a,2)){
            cout << "тогда угол A прямой" << endl << "тогда угол B  острый" << endl << "тогда угол C острый" << endl;
        }else if((pow(c, 2)+pow(a, 2)) == pow(b,2)){
            cout << "тогда угол B прямой" << endl << "тогда угол C  острый" << endl << "тогда угол A острый" << endl;
        }else{
            cout << "тогда угол B острый" << endl << "тогда угол C  острый" << endl << "тогда угол A острый" << endl;
        }
    }
}
