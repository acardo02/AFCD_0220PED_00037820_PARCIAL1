#include <iostream>
#include <string>

using namespace std;

struct TareasEspaciales{
    string nombre;
    string ubicacion;
    int Dificultad;
    int Segundos; 
    string Tipo;
};

struct TareasEspaciales Tareas[4];

void RegistrarDatos(); void TotalSegundos();

int main(){
    cout<<"Bienvenido al programa\n";

    RegistrarDatos();
    TotalSegundos();

    cout<<"Hasta Luego";

    return 0;
}

void RegistrarDatos(){
    for(int i = 0; i < 4; i++){
        cout<<"Nombre de la tarea:\n";
        getline(cin, Tareas[i].nombre);
        cout<<"Ubicación donde se realizara la tarea:\n";
        getline(cin, Tareas[i].ubicacion);
        cout<<"En un rango de uno a cinco, ingresar la dificultad de la tarea:\n";
        cin>>Tareas[i].Dificultad;
        cout<<"Cuanto tiempo se tardar en realizar la tarea(en segundos):\n";
        cin>>Tareas[i].Segundos;
        cout<<"¿Cual es el tipo de la tarea? teniendo en cuanta que R es reparar, C es clasificar y O es otros\n";
            
            cin>>Tareas[i].Tipo;
        cin.ignore();
    }
}

void TotalSegundos(){
    int CantidadTotal = 0, suma = 0;

    for(int i = 0; i < 4; i++){
        if(Tareas[i].Dificultad >= 4){
            CantidadTotal = suma + Tareas[i].Segundos;
            suma = CantidadTotal;
        }
    }
    cout<<"La cantidad total de segundos que le tomara realizar las tareas con dificultad 4 o 5 es: "<<CantidadTotal<<" segundos\n";
}