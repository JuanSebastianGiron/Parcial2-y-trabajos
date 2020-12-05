#include<iostream>

using namespace std;

void LlenarArreglo(int *pA, int n);

int main ()
{
    int n= 10;
    int A[n];

    cout<<"Ingrese 10 numeros para llenar el arreglo y calcular el mayor"<<endl;
    LlenarArreglo(&A[n], n);
}

void LlenarArreglo(int *pA, int n)
{
    
    int mayor = 0;
    for (int i=0; i<n; i++)
    {
        cin>>pA[i];
        
        if (pA[i] > mayor)
        {
            mayor = pA[i];
        }
    }

    cout<<"Numero mayor: "<<mayor<<endl;
}