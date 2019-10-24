//
//  main.cpp
//  laba2
//
//  Created by Ilya Korobka on 10/3/19.
//  Copyright © 2019 Ilya Korobka. All rights reserved.
//

#include <iostream> // страндартная для ввода и вывода инфы

using namespace std;

int main()
{
    float coordinatesX, coordinatesY;                                         // создание переменых для хранения координат x, y
    cout << "введите x ";
    cin >> coordinatesX;                                                    // запрос координаты x
    cout << "введите y ";
    cin >> coordinatesY;                                                    // запрос координаты y
    if(coordinatesY == 0 && coordinatesX == 0){                             // проверка равни ли x и y "0"
        cout << "точка лежит в центре пересечений осей x и y" << endl;
    }else if(coordinatesY == 0 || coordinatesX == 0){                       // проверка равно ли что то одно из предыдущего условия
        if(coordinatesY == 0){
            if(coordinatesX > 0){                                           // если x > 0 и y == 0
                cout << "точка находится на положытельной оси x" << endl;
            }else{                                                          // в противном случае если x < 0 и y == 0
                cout << "точка находится на отрицательной оси x" << endl;
            }
        }else{
            if(coordinatesY > 0){                                           // если y > 0 и x == 0
                cout << "точка находится на положытельной оси y" << endl;
            }else{                                                          // в противном случае если y < 0 и x == 0
                cout << "точка находится на отрицательной оси у" << endl;
            }
        }
    }else{                                                                  // условие виполняется если и x и y < или > 0
        if(coordinatesY > 0 && coordinatesX > 0){                           // x > 0    y > 0
            cout << "1 четверть" << endl;
        }else if (coordinatesY < 0 && coordinatesX < 0){                    // x < 0    y < 0
            cout << "3 четверть" << endl;
        }else if (coordinatesY < 0 && coordinatesX > 0){                    // x > 0    y < 0
            cout << "4 четверть" << endl;
        }else{                                                              // x < 0    y > 0
            cout << "2 четверть" << endl;
        }
    }
}
  


