#include<iostream>
#include<math.h>

using namespace std;

float corriente(float voltaje, float resistencia);

int main ()
{

   float voltaje, resistencia;

   cout<<endl;
   cout<<"Programa para calcular la corriente en un circuito electrico"<<endl;

   cout<<"Ingrese el valor del voltaje"<<endl;
   cin>>voltaje;

   cout<<"Ingrese el valor de la resistencia"<<endl;
   cin>>resistencia;
   
   cout<<endl;

   cout<<"La corriente resultante es: "<<corriente(voltaje,resistencia)<<endl;
   cout<<endl;
}


float corriente(float voltaje, float resistencia)
{
    float C = voltaje / resistencia;

    return C;
}