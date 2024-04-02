// In questo main sono presenti alcune righe di codice utili a testare la classe dei numeri complessi da me costruita e le funzioni/operatori ad essa associati
// Gli esempi sono puramente casuali

#include "ComplexNumber.hpp"

using namespace std;
using namespace Complex;

int main()
{
    double a = 1.0;
    double b = 2;
    double d = -1.7;

    ComplexNumber c1(a,b);
    cout << "c1: " << c1 << endl;
    ComplexNumber c2= c1.to_conjugate();
    cout << "il coniugato di c1: " << c2 << endl;

    ComplexNumber c3(a,d);
    cout << "c3: " << c3 << endl;
    cout << "il coniugato di c3: " << c3.to_conjugate() << endl;

    ComplexNumber c4 = c1 + c3;
    cout << "c1 + c3 = " << c4 << endl;

    // Verifico la tolleranza del nuovo operatore ==
    cout << "c1 == c3 ?? " << (c1 == c3) << endl ;
    double d2= -1.700000000001;
    ComplexNumber c5(a,d2);
    cout << "c3 == c5 ?? " << (c3 == c5) << endl ;

    // stampa di numeri reali o immaginari puri
    ComplexNumber c6(d,0);
    cout << "c6: " << c6 << endl;
    ComplexNumber c7(0,a);
    cout << "c7: " << c7 << endl;

    return 0;
}
