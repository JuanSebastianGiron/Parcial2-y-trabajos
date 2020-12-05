#include <iostream>

using namespace std;

void llenarUnos(float *pA, int n);
void Escribir(float *pA, int n);

int main ()
{
    int n = 100;
    float A[n];

    llenarUnos(&A[n],n);
    Escribir(&A[n],n);
}

void llenarUnos(float *pA, int n)
{
    for (int i=0; i<n; i++)
    {
        pA[n] = 1;
    }
}

void Escribir(float *pA, int n)
{
    cout<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<pA[n]<<" "; 
    }cout<<endl;
}