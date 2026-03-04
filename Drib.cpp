#include "Drib.h"
#include <iostream>
using namespace std;

// Конструктор
Drib::Drib(int c, int z) {
    chyselnyk = c;
    znamenyk = (z == 0 ? 1 : z);
    size = 10;
    count = 0;
    history = new string[size];
}

// Деструктор
Drib::~Drib() {
    delete[] history;
}

// Введення даних
void Drib::vvesty(int c, int z) {
    chyselnyk = c;
    znamenyk = (z == 0 ? 1 : z);
    addHistory("A new fraction has been introduced");
}

// Ввід з клавіатури (можна було би захардкодити, але хочу щоб користувач сам це вводив))
void Drib::input() {
    cout << "Enter the numerator: ";
    cin >> chyselnyk;
    cout << "Enter the denominator: ";
    cin >> znamenyk;
    if (znamenyk == 0) {
        cout << "The denominator cannot be 0! Automatically set to 1." << endl; // захист від користувача
        znamenyk = 1;
    }
    addHistory("Fraction entered from keyboard");
}

// Додавання
Drib Drib::add(const Drib& other) {
    int c = chyselnyk * other.znamenyk + other.chyselnyk * znamenyk;
    int z = znamenyk * other.znamenyk;
    Drib result(c, z);
    result.addHistory("Result of addition");
    return result;
}

// Віднімання
Drib Drib::sub(const Drib& other) {
    int c = chyselnyk * other.znamenyk - other.chyselnyk * znamenyk;
    int z = znamenyk * other.znamenyk;
    Drib result(c, z);
    result.addHistory("Result of subtraction");
    return result;
}

// Множення
Drib Drib::mul(const Drib& other) {
    int c = chyselnyk * other.chyselnyk;
    int z = znamenyk * other.znamenyk;
    Drib result(c, z);
    result.addHistory("Result of multiplying");
    return result;
}

// Ділення
Drib Drib::div(const Drib& other) {
    int c = chyselnyk * other.znamenyk;
    int z = znamenyk * other.chyselnyk;
    Drib result(c, z);
    result.addHistory("Result of division");
    return result;
}

// Вивід дробу
void Drib::print() {
    cout << chyselnyk << "/" << znamenyk << endl;
}

// Запис історії
void Drib::addHistory(const string& action) {
    if (count < size) {
        history[count++] = action;
    }
}