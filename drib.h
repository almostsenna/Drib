#pragma once
#ifndef DRIB_H
#define DRIB_H

#include <string>
using namespace std;

class Drib {
private:
    int chyselnyk;   // чисельник
    int znamenyk;    // знаменник
    string* history; // динамічне поле (масив рядків)
    int size;        // розмір масиву
    int count;       // кількість записів

public:
    // Конструктор і деструктор
    Drib(int c = 0, int z = 1);
    ~Drib();

    // Введення даних
    void vvesty(int c, int z);

    // Ввід з клавіатури
    void input();

    // Арифметичні операції
    Drib add(const Drib& other);
    Drib sub(const Drib& other);
    Drib mul(const Drib& other);
    Drib div(const Drib& other);

    // Вивід дробу
    void print();

private:
    void addHistory(const string& action);
};

#endif