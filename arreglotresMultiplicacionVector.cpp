#include<iostream>

using namespace std;

int main () 
{

    int arreglo[50], escalar;

    cout<<endl<<endl;

    cout<<"Ingrese el escalar por el que se va a multiplicar"<<endl;
    cin>>escalar;

    cout<<endl;
    cout<<"Los numeros del vector son: "<<endl;

    for (int i=0; i<50; i++)
    {
        arreglo[i]= i + 1;

        cout<<arreglo[i]<<" ";

    }
 
    cout<<endl;
    cout<<"El resultado de la multiplicacion es: "<<endl;

    for (int i=0; i<50; i++)
    {
        arreglo[i]= arreglo[i] * escalar;
        
        cout<<arreglo[i]<<" ";
    }
}