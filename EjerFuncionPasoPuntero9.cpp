#include <iostream>

using namespace std;

void MatrizIdentidad(int *pA, int nf, int nc);

int main ()
{
   int nf, nc;
   cout<<"Ingrese el numero de filas y despues el de columnas"<<endl;
   cin>>nf;
   cin>>nc;
   int MatrizA[nf][nc];
   MatrizIdentidad(MatrizA[][], nf, nc);
   
}

void MatrizIdentidad(int *pA, int nf, int nc)
{
   //cin>>nf;
   //cin>>nc;
   for (int i=0; i<nf; i++)
   {
       for (int j=0; j<nc; j++)
       {
           if (j==i)
           {
               pA[i][j]= 1;
           }
           else 
           {
               pA[i][j]= 0;
           }
           cout<<pA[i][j]<<" ";
       }
       cout<<endl;
   }
}