#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main ()
{
    int arreglo[20];

    srand(time(NULL));

    for (int i=0; i<20; i++)
    {
        arreglo[i]=rand()%100;
    }

    cout<<"Numeros aleatorios"<<endl<<endl;

    for (int i=0; i<20; i++)
    {
        cout<<arreglo[i]<<" ";
    }
}