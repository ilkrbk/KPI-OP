//
//  main.cpp
//  laba1
//
//  Created by Ilya Korobka on 10/3/19.
//  Copyright © 2019 Ilya Korobka. All rights reserved.
//

#include <iostream> // страндартная для ввода и вывода инфы
#include <cmath> // для мат операций сложных

using namespace std;

int main()
{
    float okrugnoct, radius, squer; // создание переменых окружности, радиуса, площади.
    cout << "введите длину окружности (см) ";
    cin >> okrugnoct; // ввод пользователём окружности
    radius = okrugnoct/(2*3.14); // вычисление радиуса
    squer = pow(radius,2)*3.14; // вычисление площади
    cout << "площадь круга = " << squer << endl; // ввывод площади(результата)
}

