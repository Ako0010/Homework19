#include <iostream>
using namespace std;

#include "oopandfunctions.h"
#include "oopandfunctions2.h"

int main() {
    Fraction f1(4, 7);
    Fraction f2(2, 3);

    Fraction resultAdd = f1.Add(f2);
    cout << "Toplama neticesi: ";
    resultAdd.Print();

    Fraction resultSubtract = f1.Minus(f2);
    cout << "Cixma neticesi: ";
    resultSubtract.Print();

    Fraction resultMultiply = f1.Multiply(f2);
    cout << "Vurma neticesi: ";
    resultMultiply.Print();

    Fraction resultDivide = f1.Divide(f2);
    cout << "Bolme neticesi: ";
    resultDivide.Print();

    cout << endl;

    /*int max = 100;
    int min = 0;
    Counter counterr(min, max);

    for (int i = min; i <= max; ++i) {
        system("cls || clear");

        cout << "-------------------------" << endl;
        cout << "|                       |" << endl;
        cout << "|           " << counterr.getCurrent() << "\t\t|" << endl;
        cout << "|                       |" << endl;
        cout << "-------------------------" << endl;

        counterr.increment();
    }*/

    //for (int i = max; i >= min; --i) {
    //    system("cls || clear");

    //    cout << "-------------------------" << endl;
    //    cout << "|                       |" << endl;
    //    cout << "|           " << counterr.getCurrent() << "\t\t|" << endl;
    //    cout << "|                       |" << endl;
    //    cout << "-------------------------" << endl;

    //    counterr.decrement();
    //}


    return 0;
}
