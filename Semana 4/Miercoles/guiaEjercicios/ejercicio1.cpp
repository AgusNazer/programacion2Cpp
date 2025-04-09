
// Crea una clase llamada Rectangulo que represente un rectángulo. La clase debe tener dos atributos 
//correspondientes a la base y altura.
//Implementa las siguientes metodos:
// Getters y Setter de cada atributo.
// calcularArea(): Devuelve el área del rectángulo.
// calcularPerimetro(): Devuelve el perímetro del rectángulo.



#include <iostream>
using namespace std;

// Definición de la clase Rectangulo
class Rectangulo {
private:
    int base;
    int altura;
    string nombre;


    public:
    // Setters
    void setBase(int b) {
        base = b;
    }

    void setAltura(int h) {
        altura = h;
    }
    void setNombre(string nombre){
        nombre = nombre;
    }

    // Getters
    int getBase() {
        return base;
    }

    int getAltura() {
        return altura;
    }
    string getNomnre(){
        return nombre;
    }
    // metodo para calcular el area
    int calcularArea(){
        return base * altura;
    }
    //metodo para calcular el perimetro
    int calcularPerimetro(){
        return 2 * (base + altura);
    }
    string mostrarNombre(string nombre){
        return nombre;
    }

};

int main() {
Rectangulo r;

int base;
int altura;
string nombre;

    // Pedimos al usuario los valores
    cout << "Ingresa la base del rectángulo: ";
    cin >> base;

    cout << "Ingresa la altura del rectángulo: ";
    cin >> altura;
    cout << "Ingresa el nombre del rectángulo: ";
    cin >> nombre;

r.setBase(base);
r.setAltura(altura);
r.setNombre(nombre);

cout <<"Area: " << r.calcularArea() <<endl;
cout <<"Perimetro: " <<r.calcularPerimetro() <<endl;
cout <<"Nombre: " <<r.mostrarNombre(nombre) <<endl;

    return 0;
}