#pragma once
#include "lib.h"

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction() : numerator(0), denominator(1) {}

    Fraction(int num, int den) : numerator(num), denominator(den) {
        if (denominator == 0) {
            cerr << "Помилка: Знаменник не може бути нулем." << endl;
            exit(1);
        }
    }

    void input() {
        cout << "Введіть чисельник: ";
        cin >> numerator;

        cout << "Введіть знаменник: ";
        cin >> denominator;

        if (denominator == 0) {
            cerr << "Помилка: Знаменник не може бути нулем." << endl;
            exit(1);
        }
    }

    void display() const {
        cout << numerator << "/" << denominator;
    }

    Fraction add(const Fraction& other) const {
        int resultNum = numerator * other.denominator + other.numerator * denominator;
        int resultDen = denominator * other.denominator;
        return Fraction(resultNum, resultDen);
    }

    Fraction subtract(const Fraction& other) const {
        int resultNum = numerator * other.denominator - other.numerator * denominator;
        int resultDen = denominator * other.denominator;
        return Fraction(resultNum, resultDen);
    }

    Fraction multiply(const Fraction& other) const {
        int resultNum = numerator * other.numerator;
        int resultDen = denominator * other.denominator;
        return Fraction(resultNum, resultDen);
    }

    Fraction divide(const Fraction& other) const {
        if (other.numerator == 0) {
            cerr << "Помилка: Ділення на нуль." << endl;
            exit(1);
        }

        int resultNum = numerator * other.denominator;
        int resultDen = denominator * other.numerator;
        return Fraction(resultNum, resultDen);
    }
};