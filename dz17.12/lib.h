#pragma once
#include <iostream>
#include <string>
#include "class.h"

using namespace std;


void input() {
    Fraction fraction1, fraction2, result;

    cout << "Введення першого дробу:\n";
    fraction1.input();

    cout << "Введення другого дробу:\n";
    fraction2.input();
};

void result() {
    Fraction fraction1, fraction2, result;
    result = fraction1.add(fraction2);
    cout << "Сума: ";
    result.display();
    cout << endl;

    result = fraction1.subtract(fraction2);
    cout << "Різниця: ";
    result.display();
    cout << endl;

    result = fraction1.multiply(fraction2);
    cout << "Добуток: ";
    result.display();
    cout << endl;

    result = fraction1.divide(fraction2);
    cout << "Частка: ";
    result.display();
    cout << endl;
    }