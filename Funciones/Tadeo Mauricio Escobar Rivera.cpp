#include <iostream>
using namespace std;

struct Alumno {
    int ID;
    string nombre;
    float calificacion;
    Alumno* siguiente;
};

Alumno* listaAlumnos = NULL;

void insertarAlumno() {
    Alumno* nuevoAlumno = new Alumno;
    cout << "Ingrese el ID del alumno: ";
    cin >> nuevoAlumno->ID;
    cout << "Ingrese el nombre del alumno: ";
    cin.ignore();
    getline(cin, nuevoAlumno->nombre);
    cout << "Ingrese la calificacion del alumno: ";
    cin >> nuevoAlumno->calificacion;
    
    nuevoAlumno->siguiente = listaAlumnos;
    listaAlumnos = nuevoAlumno;
    
    cout << "Alumno insertado correctamente." << endl;
}

void mostrarAlumnos() {
    if (listaAlumnos == NULL) {
        cout << "No hay alumnos registrados." << endl;
        return;
    }
    
    cout << "Lista de Alumnos:" << endl;
    
    Alumno* actual = listaAlumnos;
    
    while (actual != NULL) {
        cout << "ID: " << actual->ID << endl;
        cout << "Nombre: " << actual->nombre << endl;
        cout << "Calificacion: " << actual->calificacion << endl;
        cout << endl;
        
        actual = actual->siguiente;
    }
}

void buscarAlumno() {
    int idBuscar;
    cout << "Ingrese el ID del alumno a buscar: ";
    cin >> idBuscar;

    Alumno* actual = listaAlumnos;

    while (actual != NULL) {
        if (actual->ID == idBuscar) {
            cout << "ID: " << actual->ID << endl;
            cout << "Nombre: " << actual->nombre << endl;
            cout << "Calificacion: " << actual->calificacion << endl;
            return;
        }
        actual = actual->siguiente;
    }

    cout << "No se encontró ningún alumno con ese ID." << endl;
}

int main() {
    int opcion;
    
    do {
        cout << "----- MENU -----" << endl;
        cout << "1. Insertar alumno" << endl;
        cout << "2. Mostrar alumnos" << endl;
        cout << "3. Buscar alumno" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                insertarAlumno();
                break;
            case 2:
                mostrarAlumnos();
                break;
            case 3:
                buscarAlumno();
                break;
            case 4:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
                break;
        }
        
    } while (opcion != 4);
    
    // Liberar memoria de los alumnos
    Alumno* actual = listaAlumnos;
    while (actual != NULL) {
        Alumno* siguiente = actual->siguiente;
        delete actual;
        actual = siguiente;
    }
    
    return 0;
}