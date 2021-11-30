#include <iostream>
using namespace std;


class Fractie
{
    int numarator; 
    int numitor;

 public:

     Fractie(int aa=0,int bb=0); 
     Fractie(const Fractie&);
     Fractie & operator=(const Fractie &);
     
     ~Fractie();
     
     double getValoare();
     Fractie getInv();
     void setdata(int,int);
     double getNumarator();
     double getNumitor();
     
     
     friend ostream& operator<<(ostream&, const Fractie&);
     friend istream& operator>>(istream&, Fractie&);
     friend Fractie operator +(const Fractie &, const Fractie&); 
     friend Fractie operator -( const Fractie&, const Fractie& );
     friend Fractie operator *( const Fractie&, const Fractie&);
     friend Fractie operator /( const Fractie&, const Fractie&);
     friend Fractie operator -(const Fractie&); 
     Fractie& operator +=( const Fractie&);
     Fractie& operator -=( const Fractie&);
     Fractie& operator *=( const Fractie&);
     Fractie& operator /=( const Fractie&);
    
     bool operator ==(const Fractie &);
     bool operator !=(const Fractie& );
     bool operator <(const Fractie&);
     bool operator >=(const Fractie&);
     bool operator >(const Fractie&);
     bool operator <=(const Fractie&);
};