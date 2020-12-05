#include <iostream>
#include <math.h>

using namespace std;

void CalculoAreaRadio( float Cir, float &Radio, float &Area);

int main ()
{
    float Circunsferencia, Radio, Area;

    cout<<"Ingrese la circunsferencia del circulo(en metros) para calcular el radio y el area"<<endl;
    cin>>Circunsferencia;
    CalculoAreaRadio(Circunsferencia, Radio, Area);

    cout<<"El resultado es: "<<endl;
    cout<<"Radio: "<<Radio<<"  Area: "<<Area;

}

void CalculoAreaRadio( float Cir, float &Radio, float &Area)
{
    Radio = ((Cir)/(2*3.1416));
    Area = (3.1416 * (pow(Radio,2)));
}