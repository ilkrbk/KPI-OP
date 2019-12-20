//
//  main.cpp
//  olimp
//
//  Created by Ilya Korobka on 12.12.2019.
//  Copyright © 2019 Ilya Korobka. All rights reserved.
//


#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    string a;
    int result = 0;
    cin >> a;
    for (int i = 0; i < a.length(); ++i){
        result += itoa(a[i]);
    }
    cout << result;
}




//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//    long int a, result;
//    cin >> a;
//    for (long int i = 1; i <= a; ++i){
//        result = pow(i,i);
//        if((result % a) == 0){
//            cout << i;
//            break;
//        }
//    }
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//    int a, b;
//    cin >> a >> b;
//    cout << a + b;
//}
