#include<iostream>
#include<math.h>

using namespace std;

double AreaCirculo (double Radio);

int main ()
{
    double Radio;

    cout<<endl;
    cout<<"Ingrese el radio del circulo para calcular el area"<<endl;
    cin>>Radio;

    cout<<endl;
    cout<<"El area del circulo es: "<<AreaCirculo(Radio)<<endl;


}

double AreaCirculo (double Radio)
{
    double Pi = 3.141592654;
    double Diametro = pow (Radio,2);
    double Area = Diametro * Pi;

    return Area;
    
}