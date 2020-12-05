#include <iostream>

using namespace std;

void ConversionMoneda(float Pesos, float &Dolares, float &Euros);

int main ()
{
    float Pesos, Dolares, Euros;

    cout<<"Ingrese la cantidad de dinero en pesos para conversion en dolares y euros"<<endl;
    cin>>Pesos;
    ConversionMoneda(Pesos, Dolares, Euros);

    cout<<"La conversion es la siguiente: "<<endl;
    cout<<"Dolares: "<<Dolares<<"  Euros: "<<Euros<<endl;
   
}

void ConversionMoneda(float Pesos, float &Dolares, float &Euros)
{
    Dolares = Pesos / 3596;
    Euros = Pesos / 4291;
}
