#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

class Nr_complex
{
    double real; 
    double imaginar;

 public:

    Nr_complex(double a=0,double b=0);  
    Nr_complex(const Nr_complex&);
    ~Nr_complex();
    Nr_complex & operator=(const Nr_complex&);
    double getAbs();
    void setData(double,double);
    double getReal();
    double getImaginar();
    friend ostream& operator<<(ostream&, const Nr_complex&);
    friend istream& operator>>(istream&, Nr_complex&);
    friend Nr_complex operator +(const Nr_complex &, const Nr_complex&);
    friend Nr_complex operator -(const Nr_complex &, const Nr_complex&);
    friend Nr_complex operator *(const Nr_complex &, const Nr_complex&);
    
    bool operator ==(const Nr_complex &);
    bool operator !=(const Nr_complex& );
    bool operator <( Nr_complex&);
    bool operator >=( Nr_complex&);
    bool operator >( Nr_complex&);
    bool operator <=( Nr_complex&);
};