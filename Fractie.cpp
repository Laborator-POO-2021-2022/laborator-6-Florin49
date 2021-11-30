#include "Fractie.hpp"

Fractie::Fractie(int aa, int bb)
{
    this->numarator=aa;
    this->numitor=bb;
}
Fractie::Fractie(const Fractie& F)
{
    this->numarator=F.numarator;
    this->numitor=F.numitor;
}
Fractie& Fractie::operator=(const Fractie & F)
{
    this->numarator=F.numarator;
    this->numitor=F.numitor;
    return *this;
}
Fractie::~Fractie()
{
    numarator=numitor=0;
}
double Fractie::getValoare()
{
    return (double)numarator/numitor;
}
Fractie Fractie::getInv()
{
    Fractie F;
    F.numarator=this->numitor;
    F.numitor=this->numarator;
    return F;
}
void Fractie::setdata(int sus,int jos)
{
    this->numarator=sus;
    this->numitor=jos;
}
double Fractie::getNumarator()
{
    return (double)this->numarator;
}
double Fractie::getNumitor()
{
    return (double)this->numitor;
}

ostream& operator<<(ostream& out, const Fractie& F)
{
    if(F.numitor==0)
        cout<<"Fractie nedeterminata";
    else
        cout<<"Fractia este:"<<F.numarator<<"/"<<F.numitor;
    
    out<<"\nNumarator: "<<F.numarator;
    out<<"\nNumitor: "<<F.numitor<<"\n";
    out<<" ------------------------------\n";
    return out;
}
istream& operator>>(istream& in, Fractie& F)
{
    in>>F.numarator;
    in>>F.numitor;
    return in;
}
Fractie operator+(const Fractie& F1, const Fractie& F2)
{
    Fractie F(1,1);
    F.numarator=F1.numarator*F2.numitor+F2.numarator*F1.numitor;
    F.numitor=F1.numitor*F2.numitor;
    return F;
}
Fractie operator-(const Fractie& F1, const Fractie& F2)
{
    Fractie F(1,1);
    F.numarator=F1.numarator*F2.numitor-F2.numarator*F1.numitor;
    F.numitor=F1.numitor*F2.numitor;
    return F;
}
Fractie operator*(const Fractie& F1, const Fractie& F2)
{
    Fractie F;
    F.numarator=F1.numarator*F2.numarator;
    F.numitor=F1.numitor*F2.numitor;
    return F;
}
Fractie operator/(const Fractie& F1, const Fractie& F2)
{
    
    
    Fractie F;
    F.numarator=F1.numarator*F2.numitor;
    F.numitor=F1.numitor*F2.numarator;
    return F;
}

Fractie operator-(const Fractie& F)
{
    Fractie f;
    f.setdata(-F.numarator,F.numitor);
    return f;
}
Fractie& Fractie::operator +=( const Fractie& a)
{
    *this=*this+a;
    return *this;
}
Fractie& Fractie::operator -=( const Fractie& a)
{
    *this=*this-a;
    return *this;
}
Fractie& Fractie::operator *=( const Fractie& a)
{
    *this=*this*a;
    return *this;
}
Fractie& Fractie::operator /=( const Fractie& a)
{
    *this=*this/a;
    return *this;
}
bool Fractie::operator ==(const Fractie & F)
{
    if(this->numarator*F.numitor==this->numitor*F.numarator)
         return true;
    return false;
}
bool Fractie::operator !=(const Fractie & F)
{
    return !(*this==F);
}
bool Fractie::operator <(const Fractie& F)
{
    if(this->numarator*F.numitor<this->numitor*F.numarator)
         return true;
    return false;
}
bool Fractie::operator >=(const Fractie&F)
{
    return !(*this<F);
}
bool Fractie::operator >(const Fractie& F)
{
    if(this->numarator*F.numitor>this->numitor*F.numarator)
         return true;
    return false;
}
bool Fractie::operator <=(const Fractie& F)
{
    return !(*this>F);
}