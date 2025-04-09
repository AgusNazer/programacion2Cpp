


// Crea una clase llamada Dado que simule el comportamiento de un dado de seis caras. La clase debe contener los siguientes atributos:
// valor (int): Almacena el valor actual del dado (un número entre 1 y 6). //vector
// Implementa los siguientes métodos públicos:
// Dado(): Constructor que inicializa el dado con un valor aleatorio entre 1 y 6. //metodo random semilla
// lanzar(): Simula el lanzamiento del dado, asignando un nuevo valor aleatorio entre 1 y 6 al atributo valor.
// getValor(): Devuelve el valor actual del dado.
// esMaximo(): Devuelve true si el valor del dado es 6, y false en caso contrario.
// esMinimo(): Devuelve true si el valor del dado es 1, y false en caso contrario.



#include <iostream>
using namespace std;


int main(){

class Dado{
    
    private:
    int valor;

    public:
     // Constructor: se ejecuta automáticamente al crear el objeto
    Dado() {
        valor = (rand() % 6) + 1; // Número aleatorio entre 1 y 6
    }
    // metodo para retornar el valor
    int getValor(){
        return valor;
    }
}

    return 0;
}