#include <iostream>

using namespace std;

class Alumno
{
private:
    int dni;
    string nombre;
    string apellido;
    int nroLegajo;

public:
    // metodos
    void mostrarNombre(string nombre){
    }
    //getters
    void getNombre(string nombre){
        nombre = nombre;
    }
    //setters
    string setNombre(string nombre){
        return nombre;
    }
};
int main(){
    int dni;
    string nombre;
    string apellido;
    int nroLegajo;

    Alumno alumno;

    cout <<"Ingrese su nombre: ";
    cin >> nombre;

    alumno.mostrarNombre(nombre);

    cout <<"El nombre ingresado es: " <<nombre <<endl;



    return 0;
}