#pragma once
#include <iostream>
#include <string>
#include "class.h"

using namespace std;


void input() {
    Fraction fraction1, fraction2, result;

    cout << "�������� ������� �����:\n";
    fraction1.input();

    cout << "�������� ������� �����:\n";
    fraction2.input();
};

void result() {
    Fraction fraction1, fraction2, result;
    result = fraction1.add(fraction2);
    cout << "����: ";
    result.display();
    cout << endl;

    result = fraction1.subtract(fraction2);
    cout << "г�����: ";
    result.display();
    cout << endl;

    result = fraction1.multiply(fraction2);
    cout << "�������: ";
    result.display();
    cout << endl;

    result = fraction1.divide(fraction2);
    cout << "������: ";
    result.display();
    cout << endl;
    }