#include<iostream>

using namespace std;

int main ()
{
   float Media[5], suma=0, Promedio;
   
   cout<<endl;
   cout<<"Ingrese 5 numeros para calcular el promedio"<<endl;

   for (int i=0; i<5; i++)
   {
       cout<<"Ingrese numero "<<i+1<<endl;
       cin>>Media[i];
       suma += Media[i];
   }

   Promedio = suma / 5;

   cout<<endl;
   cout<<"El promedio de los numeros ingresados es: "<<Promedio;
}