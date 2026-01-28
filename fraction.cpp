#include "fraction.h"
#include <iostream>
using namespace std;

Fraction::Fraction() : num(0), den(1) {}

Fraction::Fraction(int n, int d) {
    if(d == 0) {
        cout << "Erreur: dénominateur nul" << endl;
        num = 0; den = 1;
    } else {
        num = n;
        den = d;
    }
}

int Fraction::getNum() { return num; }
int Fraction::getDen() { return den; }

void Fraction::setFraction(int n, int d) {
    if(d == 0) {
        cout << "Erreur: dénominateur nul" << endl;
        return;
    }
    num = n;
    den = d;
}

int Fraction::gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void Fraction::simplif() {
    int t = gcd(num, den);
    num /= t;
    den /= t;
}

void Fraction::somme(const Fraction& f1, const Fraction& f2) {
    int k = f1.num * f2.den + f2.num * f1.den;
    int q = f1.den * f2.den;
    setFraction(k, q);
}
