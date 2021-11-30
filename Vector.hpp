#include <iostream>
#include "Fractie.hpp"
#include "Nr_complex.hpp"
using namespace std;



template <class X>
class Vector
{
     int dim;
     X *buf;

public:
     Vector();
     Vector(int, X*);
     int getDim();
     X getCompVect(int);
     friend istream& operator>>(istream& I,Vector<X>& B);
     void Switch(int,int);
     void afisare();
};