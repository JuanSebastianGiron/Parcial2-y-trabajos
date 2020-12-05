#include<iostream>
#include<math.h>

using namespace std;

int main () 
{
   int nf, nc, matrizId[nf][nc], contador=0;

   cout<<endl;
   cout<<"Ingrese el numero de filas a la matriz"<<endl;
   cin>>nf;

   cout<<endl;
   cout<<"Ingrese el numero de columnas a la matriz"<<endl;
   cin>>nc;

   cout<<endl;

   //contar
   for (int i=0; i<nf; i++)
   {
       for (int j=0; j<nc; j++)
       {
           if (j==i)
           {
               matrizId[i][j]= 1;
           }
           else 
           {
               matrizId[i][j]= 0;
           }
           cout<<matrizId[i][j]<<" ";
 
       }
       cout<<endl;
   }


   
  
   


}

