#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main ()
{
    int nf, nc, contador=0, repetido=0;

    cout<<"Por favor ingrese el numero de filas de su arreglo"<<endl;
    cin>>nf;

    cout<<"Por favor ingrese el numero de columnas de su arreglo"<<endl;
    cin>>nc;

    int Arreglo[nf][nc]; 

    srand (time(NULL));

    cout<<endl<<"Arreglo: "<<endl;

    //Contador Arreglo
    for (int i=0; i<nf; i++)
    {
        for (int j=0; j<nc; j++)
        {
            Arreglo[i][j] = rand() % 10 + 1;
        }
    }

    //Escritura Arreglo
    for (int i=0; i<nf; i++)
    {
        for (int j=0; j<nc; j++)
        {
            cout<<Arreglo[i][j]<<" ";
        }

        cout<<endl;
    }

    //contar numero repetido
    for (int i=0; i<nf; i++)
    {
        for (int j=0; j<nc; j++)
        {
            if (Arreglo[i]== Arreglo[j])
            {
                repetido++;
            }
        }
    }

    cout<<repetido<<" ";



    



}