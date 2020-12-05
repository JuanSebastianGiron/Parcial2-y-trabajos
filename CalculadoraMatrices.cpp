#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main ()
{
    int nf, nc, Escalar;

    cout<<"Por favor ingrese el numero de filas de su arreglo"<<endl;
    cin>>nf;

    cout<<"Por favor ingrese el numero de columnas de su arreglo"<<endl;
    cin>>nc;

    cout<<"Ingrese un escalar el que se multiplicara con la matriz A"<<endl;
    cin>>Escalar;

    int matrizA[nf][nc], matrizB[nf][nc], matrizC[nf][nc];

    srand (time(NULL));

    cout<<endl<<"matriz A: "<<endl;

    //Contador matriz A
    for (int i=0; i<nf; i++)
    {
        for (int j=0; j<nc; j++)
        {
            matrizA[i][j] = rand() % 10 + 1;
        }
    }

    //Escritura matriz A
    for (int i=0; i<nf; i++)
    {
        for (int j=0; j<nc; j++)
        {
            cout<<matrizA[i][j]<<" ";
        }

        cout<<endl;
    }

    cout<<endl<<"matriz B: "<<endl;

    //Contador matriz B
    for (int i=0; i<nf; i++)
    {
        for (int j=0; j<nc; j++)
        {
            matrizB[i][j] = rand () % 10 + 1;
        }
    }

    //Escritura matriz B
    for (int i=0; i<nf; i++)
    {
        for (int j=0; j<nc; j++)
        {
            cout<<matrizB[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"matriz C: matriz A + matriz B"<<endl;

    //Contador matriz C SUMA
    for (int i=0; i<nf; i++)
    {
        for (int j=0; j<nc; j++)
        {
            matrizC[i][j]= matrizA[i][j] + matrizB[i][j];
        }
    }

    //Escritura matriz C SUMA
    for (int i=0; i<nf; i++)
    {
        for (int j=0; j<nc; j++)
        {
            cout<<matrizC[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"matriz C: matriz A - matriz B"<<endl;

    //Contador matriz C RESTA
    for (int i=0; i<nf; i++)
    {
        for (int j=0; j<nc; j++)
        {
            matrizC[i][j]= matrizA[i][j] - matrizB[i][j];
        }
    }

    //Escritura matriz C RESTA
    for (int i=0; i<nf; i++)
    {
        for (int j=0; j<nc; j++)
        {
            cout<<matrizC[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"Matriz A multipliado por escalar"<<endl;

    //Multiplicador escalar
    for (int i=0; i<nf; i++)
    {
        for (int j=0; j<nc; j++)
        {
            matrizA[i][j]= matrizA[i][j] * Escalar;
        }
    }

    //Escritura escalar
    for (int i=0; i<nf; i++)
    {
        for (int j=0; j<nc; j++)
        {
            cout<<matrizA[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"Matriz A multiplicado por escalar en transpuesta"<<endl;

    //Escritura transpuesta matriz A
    for (int i=0; i<nf; i++)
    {
        for (int j=0; j<nc; j++)
        {
            cout<<matrizA[j][i]<<" ";
        }
        cout<<endl;
    }



}