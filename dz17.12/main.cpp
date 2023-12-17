#include "lib.h"
#include "class.h"


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Student student;

    cout << "Введення даних студента:\n";
    student.input();

    cout << "\nІнформація про студента:\n";
    student.display();

    return 0;
}