#include "lib.h"
#include "class.h"

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Point point;

   
    cout << "�������� ��������� �����:\n";
    point.input();


    cout << "\n���������� �����: ";
    point.display();
    cout << endl;


    point.saveToFile("point.txt");
    cout << "��� ��������� � ���� 'point.txt'.\n";

    Point loadedPoint;
    loadedPoint.loadFromFile("point.txt");
    cout << "\n���������� ���������� �����: ";
    loadedPoint.display();
    cout << endl;

    return 0;
}