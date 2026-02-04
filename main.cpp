#include <iostream>
#include "fraction.h"
using namespace std;

int main() {
    Fraction f1(1, 2); 
    Fraction f2(3, 4); 
    cout << "Fraction 1: " << f1.getNum() << "/" << f1.getDen() << endl;
    cout << "Fraction 2: " << f2.getNum() << "/" << f2.getDen() << endl;
    Fraction result;
    result.somme(f1, f2);
    cout << "Sum: " << result.getNum() << "/" << result.getDen() << endl;
    result.simplif();
    cout << "Simplified sum: " << result.getNum() << "/" << result.getDen() << endl;
    return 0;
}
