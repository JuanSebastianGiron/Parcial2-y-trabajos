#include<iostream>
#include<math.h>

using namespace std;

double DistanciaEuclidiana ( double Xuno, double Xdos, double Yuno, double Ydos);

int main ()
{
    double Xuno, Xdos, Yuno, Ydos;

    cout<<endl;
    cout<<"Programa para calcular la distancia euclidiana"<<endl;
    cout<<"Digite la primera coordenada, primero X despues Y"<<endl;
    cin>>Xuno;
    cin>>Yuno;

    cout<<endl;
    cout<<"Digite la segunda coordenada, primero X despues Y"<<endl;
    cin>>Xdos;
    cin>>Ydos;

    cout<<endl;
    cout<<"El resultado es: "<<DistanciaEuclidiana(Xuno,Xdos,Yuno,Ydos)<<endl;

}

double DistanciaEuclidiana ( double Xuno, double Xdos, double Yuno, double Ydos)
{
    double Dis = sqrt (((pow(Xdos-Xuno,2))+(pow(Ydos-Yuno,2))));
    
    return Dis;
}

