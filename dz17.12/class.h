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
        cout << "Введіть ПІБ студента: ";
        getline(cin, fullName);

        cout << "Введіть дату народження: ";
        getline(cin, birthDate);

        cout << "Введіть контактний телефон: ";
        getline(cin, contactPhone);

        cout << "Введіть місто проживання: ";
        getline(cin, homeCity);

        cout << "Введіть країну проживання: ";
        getline(cin, homeCountry);

        cout << "Введіть назву навчального закладу: ";
        getline(cin, universityName);

        cout << "Введіть місто навчального закладу: ";
        getline(cin, universityCity);

        cout << "Введіть країну навчального закладу: ";
        getline(cin, universityCountry);

        cout << "Введіть номер групи: ";
        getline(cin, groupNumber);
    }
    void display() const {
        cout << "ПІБ: " << fullName << endl;
        cout << "Дата народження: " << birthDate << endl;
        cout << "Контактний телефон: " << contactPhone << endl;
        cout << "Місто проживання: " << homeCity << endl;
        cout << "Країна проживання: " << homeCountry << endl;
        cout << "Назва навчального закладу: " << universityName << endl;
        cout << "Місто навчального закладу: " << universityCity << endl;
        cout << "Країна навчального закладу: " << universityCountry << endl;
        cout << "Номер групи: " << groupNumber << endl;
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