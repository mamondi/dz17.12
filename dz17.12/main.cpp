#include "lib.h"
#include "class.h"


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Student student;

    cout << "�������� ����� ��������:\n";
    student.input();

    cout << "\n���������� ��� ��������:\n";
    student.display();

    return 0;
}