#include<iostream>

using namespace std;

int main ()
{

    int arreglo[100];

    cout<<endl<<endl;

    for (int i=0; i<100; i++)
    {
       arreglo[i] = 1;
    }

    for (int i=0; i<100; i++)
    {
        cout<<arreglo[i]<<" ";
    }

    cout<<endl<<endl;
}