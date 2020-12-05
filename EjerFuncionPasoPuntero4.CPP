#include <iostream>

using namespace std;

void LlenarArreglo(int *pA, int n);
void MostrarArreglo(int *pA, int n);

int main ()
{
    int n = 10;
    int A[n];

    cout<<endl;
    cout<<"Ingrese 10 numeros para llenar el arreglo"<<endl;
    LlenarArreglo(&A[n], n);
    cout<<endl;
    
}

void LlenarArreglo(int *pA, int n)
{
    for (int i=0; i<n; i++)
    {
        cin>>pA[i];
    }
    MostrarArreglo(pA, n);
}

void MostrarArreglo(int *pA, int n)
{
    cout<<"Los numeros del arreglo son: "<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<pA[i]<<" ";
    }
}


