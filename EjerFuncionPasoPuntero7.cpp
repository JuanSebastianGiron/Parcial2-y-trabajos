#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void LlenarArreglo(int *pA, int n);
void NumPares(int *pA, int n);

int main ()
{
   int n=20;
   int A[n];

   cout<<"El arreglo contiende los siguientes numeros: "<<endl;
   LlenarArreglo(&A[n], n);

}

void LlenarArreglo(int *pA, int n)
{
    srand(time(NULL));

    for (int i=0; i<n; i++)
    {
        pA[i]= rand()%100;
        cout<<pA[i]<<" ";
    }

    NumPares(pA, n);
}

void NumPares(int *pA, int n)
{
    cout<<endl<<"Los numeros pares son: "<<endl;

    for (int i=0; i<n; i++)
    {   
        if (pA[i] % 2 == 0)
        {
            cout<<pA[i]<<" ";
        }

        
    }
}




