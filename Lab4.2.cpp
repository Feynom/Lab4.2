#include "ComplexNumber.h"
#include "Matrix.h"
#include "Vector.h"

int main()
{
    cout << "\nComplexNumber:" << endl;
    ComplexNumber A(1, 2);
    A.Print();
    cout << "\nNorm of ComplexNumber is: " << A.Norma() << endl;

    cout << "\Vector:" << endl;
    Vector B(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    B.Print();
    cout << "\nNorm of Vector is: " << B.Norma() << endl;

    cout << "\Matrix:" << endl;
    Matrix C(-1, -2, -3, -4);
    C.Print();
    cout << "\nNorm of Matrix is: " << C.Norma() << endl;

    Abstract* pa = new ComplexNumber();
    Abstract* pb = new Vector();
    Abstract* pc = new Matrix();

    cout << endl;
    cout << typeid(pa).name() << endl;
    cout << typeid(*pa).name() << endl;
    cout << typeid(pb).name() << endl;
    cout << typeid(*pb).name() << endl;
    cout << typeid(pc).name() << endl;
    cout << typeid(*pc).name() << endl;
    
    delete pc, delete pb, delete pa;

    Abstract* N[3];

    N[0] = &A;
    N[1] = &B;
    N[2] = &C;

    cout << "\nNorm of ComplexNumber is: " << N[0]->Norma() << endl;
    cout << "\nNorm of Vector is: " << N[1]->Norma() << endl;
    cout << "\nNorm of Matrix is: " << N[2]->Norma() << endl;

    return 0;
}