#include "ComplexNumber.hpp"
#include <iostream>
#include <cmath>

using namespace std;

namespace Complex{
ComplexNumber ComplexNumber::to_conjugate()
{
    double a = real;
    double b = - imaginary;
    return ComplexNumber(a,b) ;
};

ostream& operator << (ostream& os, const ComplexNumber& c)
{
    if (signbit(c.imaginary))
    {
        os << c.real << "-" << abs(c.imaginary) << "i" ;
    }
    else
    {
        os << c.real << "+" << abs(c.imaginary) << "i" ;
    }
    return os;
};

ComplexNumber operator + (const ComplexNumber& c1,const ComplexNumber& c2)
{
    double a = c1.real + c2.real ;
    double b = c1.imaginary + c2.imaginary ;
    ComplexNumber c(a, b);
    return c;
};

bool operator == (const ComplexNumber& c1,const ComplexNumber& c2)
{
    bool s;
    if ((abs(c1.real - c2.real) <= 1.0e-10) && (abs(c1.imaginary - c2.imaginary) <= 1.0e-10) )
    {
        s = true;
    }
    else
    {
        s = false;
    }
    return s;
};

}
