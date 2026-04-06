#include <iostream>
#include "Drib.h"
using namespace std;
using namespace MathObjects::Fractions;

int main() {
    Drib a, b;

    cout << "Enter the fraction a:" << endl;
    a.input();

    cout << "Enter the fraction b:" << endl;
    b.input();

    cout << "a = "; a.print();
    cout << "b = "; b.print();

    Drib sum = a.add(b);
    cout << "a + b = "; sum.print();

    Drib diff = a.sub(b);
    cout << "a - b = "; diff.print();

    Drib prod = a.mul(b);
    cout << "a * b = "; prod.print();

    Drib quot = a.div(b);
    cout << "a / b = "; quot.print();

    return 0;
}