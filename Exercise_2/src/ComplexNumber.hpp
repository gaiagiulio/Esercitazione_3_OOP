#ifndef __COMPLEX_H
#define __COMPLEX_H

#include <iostream>

using namespace std;

namespace Complex{

struct ComplexNumber
{
    double real;
    double imaginary;

    ComplexNumber()= default;
    ComplexNumber(double a, double b)
    {
        real = a;
        imaginary = b;
    };

    ComplexNumber to_conjugate();
};

ostream& operator << (ostream &os, const ComplexNumber &c);

ComplexNumber operator + (const ComplexNumber &c1,const ComplexNumber &c2);

bool operator == (const ComplexNumber &c1,const ComplexNumber &c2);

}

#endif
