#include "Vector.hpp"




int main()
{
    Vector<int> I1;
    cin>>I1;
    cout<<"Se efectueaza ordonarea crescatoare a elementelor vectorului de intregi:\n";
    for(int i=0;i<I1.getDim()-1;i++)
           for(int j=i+1;j<I1.getDim();j++)
                    if(I1.getCompVect(i)>I1.getCompVect(j))
                               I1.Switch(i,j);
    I1.afisare();
    

    Vector<double> D;
    cin>>D;
    cout<<"Se efectueaza ordonarea crescatoare a elementelor vectorului de tip double:\n";
    for(int i=0;i<D.getDim()-1;i++)
           for(int j=i+1;j<D.getDim();j++)
                    if(D.getCompVect(i)>D.getCompVect(j))
                               D.Switch(i,j);
    
    Vector<Fractie> Fr;
    cin>>Fr;
    cout<<"Se efectueaza ordonarea crescatoare a elementelor vectorului de fractii:\n";
    for(int i=0;i<Fr.getDim()-1;i++)
           for(int j=i+1;j<Fr.getDim();j++)
                    if(Fr.getCompVect(i).getValoare() > Fr.getCompVect(j).getValoare())
                               Fr.Switch(i,j);

    Vector<Nr_complex> Nr;
    cin>>Fr;
    cout<<"Se efectueaza ordonarea crescatoare a elementelor vectorului de numere complexe:\n";
    for(int i=0;i<Nr.getDim()-1;i++)
           for(int j=i+1;j<Nr.getDim();j++)
                    if(Nr.getCompVect(i).getAbs() > Nr.getCompVect(j).getAbs())
                               Nr.Switch(i,j);

                               
    return 98;
}