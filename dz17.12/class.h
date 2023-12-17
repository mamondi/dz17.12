#pragma once
#include "lib.h"

class Point {
private:
    double x;
    double y;
    double z;

public:
    void input() {
        cout << "������ ���������� x: ";
        cin >> x;

        cout << "������ ���������� y: ";
        cin >> y;

        cout << "������ ���������� z: ";
        cin >> z;
    }

    void display() const {
        cout << "(" << x << ", " << y << ", " << z << ")";
    }

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    double getZ() const {
        return z;
    }
    void saveToFile(const string& filename) const {
        ofstream outFile(filename);
        if (outFile.is_open()) {
            outFile << x << " " << y << " " << z;
            outFile.close();
        }
        else {
            cerr << "�� ������� ������� ���� ��� ������." << endl;
        }
    }

    void loadFromFile(const string& filename) {
        ifstream inFile(filename);
        if (inFile.is_open()) {
            inFile >> x >> y >> z;
            inFile.close();
        }
        else {
            cerr << "�� ������� ������� ���� ��� �������." << endl;
        }
    }
};