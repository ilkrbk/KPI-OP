//
//  main.cpp
//  laba5
//
//  Created by Ilya Korobka on 30.10.2019.
//  Copyright © 2019 Ilya Korobka. All rights reserved.
//

#include <iostream>


using namespace std;

int main() {

    string str = "";
    for(int k = 0; k <= 100; k++){
        str = to_string(k);
        for(int i = 0; i < str.length(); i++){
            if(str[i] != str[str.length()-(i+1)]){
                cout << "false" << endl;
                break;
            }else if(pow(){
                cout << "true" << endl;
            }
        }
    }
}
