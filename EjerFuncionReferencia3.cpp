#include<iostream>
#include<math.h>

using namespace std;

void FuncionRadio(double EntradaX, double EntradaY, double &SalidaR, double &SalidaT);

int main ()
{

    double EntradaX, EntradaY, r, T;

    cout<<"Ingrese las coordenadas rectangulares para convertirlas en polares"<<endl;
    cin>>EntradaX;
    cin>>EntradaY;
    FuncionRadio(EntradaX, EntradaY, r, T);

    cout<<endl;
    cout<<"Las coordenadas en polares son: "<<endl;
    cout<<"r: "<<r<<"  T(radianes): "<<T<<endl;
    

}

void FuncionRadio(double EntradaX, double EntradaY, double &SalidaR, double &SalidaT)
{
    //Operacion para calcular radio
    SalidaR = sqrt((pow(EntradaX,2))+(pow(EntradaY,2)));
    //Operacion para calcular Theta
    SalidaT = atan2(EntradaY, EntradaX);
}

