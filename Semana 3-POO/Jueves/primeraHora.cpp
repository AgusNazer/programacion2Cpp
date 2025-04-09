///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///ENCAPSULAMIENTO: las clases permiten el acceso a las propiedades sÛlo por medio de
///mÈtodos definidos en la propia clase


class Fecha{
    private:
        int dia, mes, anio;
    public:
        void Cargar();///para asignarle valor a las propiedades
        void Mostrar();
        void MostrarH();
        ///set-> para modificar el valor de las propiedades

        void setDia(int d){
            if(d>=1 && d <= 31){
                dia =d;
            }else{

            }
        }
        void setDia(int d){dia=d;}///validar que d estÈ entre 1 y 31
        void setMes(int d){mes=d;}///validar que d estÈ entre 1 y 12
        void setAnio(int d){anio=d;}///validar que sea positivo

        ///get-> para sacar hacia afuera el valor de las propiedades
        int getDia(){return dia;}
        int getMes(){return mes;}
        int getAnio(){return anio;}
};

void Fecha::Cargar(){
    cout<<"DIA ";
    cin>>dia;
    cout<<"MES ";
    cin>>mes;
    cout<<"ANIO ";
    cin>>anio;
}

void Fecha::Mostrar(){
    cout<<"DIA "<<dia<<endl;
    cout<<"MES "<<mes<<endl;
    cout<<"ANIO "<<anio<<endl;
}

void Fecha::MostrarH(){
    cout<<dia<<"/"<<mes<<"/"<<anio<<endl;
}

int main(){
    Fecha date, otra;
    date.Cargar();
    otra.Cargar();
    ///comparar para saber si las fechas pertenecen al mismo aÒo
    if(date.getAnio()==otra.getAnio()){
        cout<<"LAS FECHAS SON DEL MISMO ANIO";
    }
    else{
        cout<<"LAS FECHAS NO SON DEL MISMO ANIO";
    }
	cout<<endl;
	system("pause");
	return 0;
}
// Para la clase Fecha
// * establecer las validaciones en los sets
// * modificar el cargar de manera tal que las validaciones de los sets sean utilizadas
// al momento de cargar los objetos mediante el método Cargar()

// * Agregar un constructor que asigne la fecha del día como valor por omisión para los
// objetos.

// * Agregar una opción del mostrar que muestre el mes en letras (Enero, Febrero, ...)