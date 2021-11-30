#include "Nr_complex.hpp"

Nr_complex::Nr_complex(double a,double b)
{
    real=a;
    imaginar=b;
}

Nr_complex::Nr_complex(const Nr_complex& N)
{
    real=N.real;
    imaginar=N.imaginar;
}
Nr_complex& Nr_complex::operator=(const Nr_complex& N)
{
    this->real=N.real;
    this->imaginar=N.imaginar;
    return *this;
}

Nr_complex::~Nr_complex()
{
    real=imaginar=0;
}
double Nr_complex::getAbs()
{
    return sqrt(real*real+imaginar*imaginar);
}
void Nr_complex::setData(double a,double b)
{
    real=a;
    imaginar=b;
}
double Nr_complex::getReal()
{
    return real;
}
double Nr_complex::getImaginar()
{
    return imaginar;
}
ostream& operator<<(ostream& o, const Nr_complex& N) 
{
     o<<"Numarul complex este: "<<N.real<<"+"<<N.imaginar<<"j.\n";
     return o;
}
istream& operator>>(istream& i, Nr_complex& N)
{
    i>>N.imaginar;
    i>>N.real;
    return i;
}
bool Nr_complex::operator ==(const Nr_complex& N)
{
     if(this->real == N.real  && this->imaginar == N.imaginar)
           return true;
    return false;
}
bool Nr_complex::operator !=(const Nr_complex& N)
{
    return !(*this==N);
}
bool Nr_complex::operator <( Nr_complex& N)
{
     if(this->getAbs() < N.getAbs())
              return true; 
     return false;
}
bool Nr_complex::operator >=( Nr_complex& N)
{
    return !(*this<N);
}
bool Nr_complex::operator >( Nr_complex& N)
{
     if(this->getAbs() > N.getAbs())
              return true; 
     return false;
}
bool Nr_complex::operator <=( Nr_complex& N)
{
    return !(*this>N);
}
Nr_complex operator +(const Nr_complex &N1, const Nr_complex& N2)
{
     Nr_complex N;
     N.real=N1.real+N2.real;
     N.imaginar=N1.imaginar+N2.imaginar;
     return N;
}
Nr_complex operator -(const Nr_complex &N1, const Nr_complex& N2)
{
     Nr_complex N;
     N.real=N1.real-N2.real;
     N.imaginar=N1.imaginar-N2.imaginar;
     return N;
}
Nr_complex operator *(const Nr_complex &N1, const Nr_complex& N2)
{
     Nr_complex N;
     N.real=N1.real*N2.real-N1.imaginar*N2.imaginar;
     N.imaginar=N1.real*N2.imaginar+N2.real*N1.imaginar;
     return N;
}
