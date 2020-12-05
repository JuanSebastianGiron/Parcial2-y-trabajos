#include <iostream>
using namespace std;

int factorial(int n);
int mezcla(int n, int k);

int main(){
    int n, suma=0;
    cout<<"ingrese numero de filas"<<endl;
    cin>>n;
    cout<<endl<<endl;
    
    //Escribir triangulo pascal
    for (int i=0; i<=n; i++)
    {
        for (int j=0; j<=i; j++)
        {
            cout <<mezcla(i,j)<<" ";
        }
        cout<<endl;
    }

    //Suma de los elementos
    for (int i=1; i<=n; i++)
    {
        for (int j=0; j<=n; j++)
        {
            suma = suma + mezcla(i, j);
        }
    }

    cout<<"La suma es: "<<suma<<endl;

    return 0;
}

int factorial(int n)
{
    int resultado=1;
    for (int i=1; i<=n; i++)
    {
        resultado*=i;
    }
    return resultado;
}

int mezcla(int n, int k)
{

    return (factorial(n))/(factorial(k)*factorial(n - k));
}

