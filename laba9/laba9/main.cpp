//
//  main.cpp
//  laba9
//
//  Created by Ilya Korobka on 08.12.2019.
//  Copyright © 2019 Ilya Korobka. All rights reserved.
#include <iostream>
#include <string>

using namespace std;
int worldsN(string);
void ennd(int num, int vari, string end, string array[num]);

int main() {
    int count = 0, vari = 0;
    string str, end, strResult;
    cout << "enter string: ";
    getline(cin, str);
    cout << "end: ";
    cin >> end;
    str += ' ';
    int num = worldsN(str);
    string array[num];
    int ii = 0;
    for (int i = 0; i <= str.length(); ++i){
        if (str[i] == ' '){
            for (int k = ii; k < i; ++k){
                if (count == 0){
                    array[count] += str[k];
                } else if (k == ii){
                    array[count] += str[k];
                    array[count].erase(0, 1);
                } else {
                    array[count] += str[k];
                }
            }
            ii = i;
            ++count;
        }
    }
    ennd(num, vari, end, array);
}

int worldsN(string str){
    int num = 0;
    for (int i = 0; i <= str.length(); ++i){
        if (str[i] == ' '){
            num++;
        }
    }
    return num;
}

void ennd(int num, int vari, string end, string array[num]){
    cout << "строка новая: ";
    for(int f = 0; f < num; ++f){
        for (int d = 0; d < end.length(); ++d){
            if (array[f][array[f].length() - d] != end[end.length() - d]){
                cout << array[f] << " ";
                break;
            } else if (array[f][array[f].length() - d - 1] == end[end.length() - d - 1] && d == end.length() - 1){
                vari++;
            }
        }
    }
    cout << endl << "кол-во: " << vari << endl;
}
