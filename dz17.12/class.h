#pragma once
#include "lib.h"


class Student {
private:
    string fullName;
    string birthDate;
    string contactPhone;
    string homeCity;
    string homeCountry;
    string universityName;
    string universityCity;
    string universityCountry;
    string groupNumber;

public:
    void input() {
        cout << "������ ϲ� ��������: ";
        getline(cin, fullName);

        cout << "������ ���� ����������: ";
        getline(cin, birthDate);

        cout << "������ ���������� �������: ";
        getline(cin, contactPhone);

        cout << "������ ���� ����������: ";
        getline(cin, homeCity);

        cout << "������ ����� ����������: ";
        getline(cin, homeCountry);

        cout << "������ ����� ����������� �������: ";
        getline(cin, universityName);

        cout << "������ ���� ����������� �������: ";
        getline(cin, universityCity);

        cout << "������ ����� ����������� �������: ";
        getline(cin, universityCountry);

        cout << "������ ����� �����: ";
        getline(cin, groupNumber);
    }
    void display() const {
        cout << "ϲ�: " << fullName << endl;
        cout << "���� ����������: " << birthDate << endl;
        cout << "���������� �������: " << contactPhone << endl;
        cout << "̳��� ����������: " << homeCity << endl;
        cout << "����� ����������: " << homeCountry << endl;
        cout << "����� ����������� �������: " << universityName << endl;
        cout << "̳��� ����������� �������: " << universityCity << endl;
        cout << "����� ����������� �������: " << universityCountry << endl;
        cout << "����� �����: " << groupNumber << endl;
    }

    string getFullName() const {
        return fullName;
    }

    string getBirthDate() const {
        return birthDate;
    }

    string getContactPhone() const {
        return contactPhone;
    }

    string getHomeCity() const {
        return homeCity;
    }

    string getHomeCountry() const {
        return homeCountry;
    }

    string getUniversityName() const {
        return universityName;
    }

    string getUniversityCity() const {
        return universityCity;
    }

    string getUniversityCountry() const {
        return universityCountry;
    }

    string getGroupNumber() const {
        return groupNumber;
    }
};