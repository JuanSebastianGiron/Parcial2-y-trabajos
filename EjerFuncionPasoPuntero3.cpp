#include<iostream>

using namespace std;

void Vector(int *pA, int n);
void MulVector(int *pA, int n);

int main ()
{
   int n = 50;
   int A[n];

   cout<<"Vector: "<<endl;
   Vector(&A[n], n);
   cout<<endl;

  
}

void Vector(int *pA, int n)
{
    for (int i=0; i<50; i++)
    {
        pA[i] = i + 1;

        cout<<pA[i]<<" ";
    }
    MulVector(pA, n);
}

void MulVector(int *pA, int n)
{
    int escalar;
    cout<<endl<<"Digite el escalar por el cual va a multiplicar el vector en sus posiciones: ";
    cin>>escalar;
    cout<<endl<<"Vector multiplicado por un escalar: "<<endl;
    for (int i=0; i<n; i++)
    {
        pA[i] = pA[i] * escalar;
        cout<<pA[i]<<" ";
    }
}