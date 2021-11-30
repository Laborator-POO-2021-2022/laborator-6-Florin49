#include "Vector.hpp"



template <class X>
Vector<X>::Vector():dim(0),buf(NULL)
{

}

template <class X>
Vector<X>::Vector(int n, X* vec):dim(n)
{
     buf=new X[n];
     for(int i=0;i<n;i++)
        buf[i]=vec[i];
}

template <class X>
void Vector<X>::afisare()
{
    for(int i=0;i<this->dim;i++)
          cout<<this->buf[i]<<endl;
}

template <class X>
int Vector<X>::getDim()
{
     return this->dim;
}

template <class X>
X Vector<X>::getCompVect(int k)
{
    return this->buf[k];
}

template <class X>

istream& operator>>(istream& I,Vector<X>& B)
{
    cout<<"Cititi lungimea vectorului ";
    I>>B.dim;
    if(B.buf!=NULL)
         delete[] B.buf;
    B.buf=new X[B.dim];
    cout<<"Cititi fiecare componenta pentru acesta ";
    for(int i=0;i<B.dim;i++)
        I>>B.buf[i];
    return I;
}




template <class X>
void Vector<X>::Switch(int i,int j)
{  
    X aux;
    aux=this->buf[i];
    this->buf[i]=this->buf[j];
    this->buf[j]=aux;
}  
namespace
{
   void test()
   {
      Vector<int> a;
      int V[2]={1,3},n=2;
      Vector<int> b(n,V);
      cin>>a;
      b.afisare();
      b.Switch(0,1);
      cout<<a.getDim()<<" "<<a.getCompVect(1);

      Vector<double> f;
      double v[2]={1,2.5};
      Vector<double> g(n,v);
      cin>>f;
      b.afisare();
      g.Switch(0,1);
      cout<<g.getDim()<<" "<<g.getCompVect(1);

      Vector<Fractie> x;
      Fractie Vec[2];
      Vec[0].setdata(3,4);
      Vec[1].setdata(5,4);
      Vector<Fractie> y(n,Vec);
      cin>>x;
      y.afisare();
      y.Switch(0,1);
      cout<<x.getDim()<<" "<<x.getCompVect(1);

      Vector<Nr_complex> o;
      Nr_complex sec[2];
      sec[0].setData(3,4);
      sec[1].setData(5,4);
      Vector<Nr_complex> z(n,sec);
      cin>>o;
      z.afisare();
      z.Switch(0,1);
      cout<<o.getDim()<<" "<<o.getCompVect(1);
   }




}