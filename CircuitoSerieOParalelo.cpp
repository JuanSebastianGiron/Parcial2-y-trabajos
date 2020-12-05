#include<iostream>
#include<math.h>

using namespace std;

double CalculoCir (double SerPar);

int main ()
{
    double R1, R2, R3, DC, SerPar, resultado;

    cout<<endl;
    cout<<"Programa de calculo de elementos de circuitos"<<endl;
    cout<<"Ingrese las tres resistencias del circuito"<<endl;
    cin>>R1;
    cin>>R2;
    cin>>R3;

    cout<<"Ingrese la fuente DC"<<endl;
    cin>>DC;

    cout<<"Ingrese 0 si el circuito a evaluar en serie o 1 en paralelo"<<endl;
    cin>>SerPar;

    resultado = CalculoCir( SerPar);
    cout<<endl;
    cout<<"El resultado del circuito es:"<<endl;
    cout<<"Corriente = "<<resultado<<endl;
    
}

double CalculoCir (double SerPar)
{
    //serpar=1 es paralelo
    if ( SerPar==1)
    {
        double R1, R2, R3, DC;
        double Equivalente = (1/ ((1/R1)+(1/R2)+(1/R3)));
        double Corriente = DC / Equivalente;

        return Corriente;
    }
    
    //Serpar=0 es serie
    if ( SerPar==0)
    {
        double R1, R2, R3, DC;
        double Equivalente = R1 + R2 + R3;
        double Corriente = DC / Equivalente;
        
        return Corriente;
    }
    
}

