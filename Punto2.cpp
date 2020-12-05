#include <iostream>
#include <string>

using namespace std;

struct Estudiante
{
    string nombre;
    int edad, semestre, id;
};


int main ()
{
    Estudiante a[2];
    
    a[0].nombre = "Juan";
    a[0].id = 9025;
    a[0].edad = 18;
    a[0].semestre = 4;

    a[1].nombre = "Bryan";
    a[1].id = 6723;
    a[1].edad = 19;
    a[1].semestre = 4;

    for (int i=0; i<2; i++)
    {
        cout<<"Nombre del Estudiante: "<<a[i].nombre<<endl;
        cout<<"Documento de identidad: "<<a[i].id<<endl;
        cout<<"Edad del estudiante: "<<a[i].edad<<endl;
        cout<<"Semestre en curso: "<<a[i].semestre<<endl;
        cout<<endl;
    }


}




