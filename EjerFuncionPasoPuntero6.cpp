#include <iostream>
#include <math.h>

using namespace std;

void NumImpares(int *pA, int n);
void Sumatoria(int *pA, int n);

int main ()
{
   int n, A[n];

   NumImpares(&A[n], n);
}

void NumImpares(int *pA, int n)
{
   cout<<"Ingrese hasta que numero desea terminar el arreglo"<<endl;
   cin>>n;

   for (int i=0; i<=n; i++)
   {
       pA[i] = i;
       
       if (pA[i] % 2 == 0)
       {

       }else
       {
           cout<<pA[i]<<" ";
       }
   }

   Sumatoria(pA, n);
}

void Sumatoria(int *pA, int n)
{
    cout<<endl<<"La sumatoria de los numeros mostrados es: "<<endl;
    int suma = 0;

    for (int i=0; i<=n; i++)
    {
        if (pA[i] % 2 == 0)
       {

       }else
       {
         suma += i;
       }
    }

    cout<<suma;

}