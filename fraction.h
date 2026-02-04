
---


#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
using namespace std;
class Fraction {
private:
    int num, den;
    int gcd(int a, int b); // Fonction pour simplifier la fraction

public:
    Fraction();
    Fraction(int n, int d);
    void setFraction(int n, int d);
    int getNum();
    int getDen();
    void simplif();
    void somme(const Fraction& f1, const Fraction& f2);
};

#endif
