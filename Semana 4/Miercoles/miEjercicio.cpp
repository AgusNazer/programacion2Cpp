#include <iostream>
using namespace std;

class Alumno
{
private:
    int legajo;
    string nombre;
    string apellido;
    int dni;
    string curso;

public:
    void mostrarNombre()
    {
        cout << "Nombre: " << nombre << endl;
    }

    void mostrarApellido()
    {
        cout << "Apellido: " << apellido << endl;
    }

    string getNombre()
    {
        return nombre;
    }

    string getApellido()
    {
        return apellido;
    }

    void setNombre(string nuevoNombre)
    {
        nombre = nuevoNombre;
    }

    void setLegajo(int legajo)
    {
        this->legajo = legajo;
    }

    void mostrarDatos()
    {
        cout << "Legajo: " << legajo << endl;
        cout << "Nombre: " << nombre << endl;
    }
};

int main()
{
    int legajo;
    string nombre;

    Alumno alumno;

    cout << "Ingrese su nombre: ";
    cin >> nombre;
    alumno.setNombre(nombre);

    cout << "Ingrese su legajo: ";
    cin >> legajo;
    alumno.setLegajo(legajo);

    alumno.mostrarDatos();

    return 0;
}