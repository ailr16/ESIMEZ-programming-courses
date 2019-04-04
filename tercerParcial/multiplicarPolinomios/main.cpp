#include <iostream>
#include "TERMINOA.H"

using namespace std;

int main()
{
    TerminoA a(12,'x',2),
             b(3,'x',3);

    cout << a << " * " << b << "= " << a*b << endl;
    cout << a << " * " << 3 << "= " << a*3 << endl;
    cout << 3 << " * " << b << "= " << 3*b << endl;
    cout << a << " / " << 12 << "= " << a/12 << endl;
    cout << a << " / " << 2 << "= " << a/2 << endl;

    cout << a << " + " << b << "= " << a + b << endl;

    return 0;
}
