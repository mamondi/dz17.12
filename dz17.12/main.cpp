#include "lib.h"
#include "class.h"

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Point point;

   
    cout << "Введення координат точки:\n";
    point.input();


    cout << "\nКоординати точки: ";
    point.display();
    cout << endl;


    point.saveToFile("point.txt");
    cout << "Дані збережено в файлі 'point.txt'.\n";

    Point loadedPoint;
    loadedPoint.loadFromFile("point.txt");
    cout << "\nЗавантажені координати точки: ";
    loadedPoint.display();
    cout << endl;

    return 0;
}