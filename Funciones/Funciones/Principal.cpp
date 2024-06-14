#include "TadeoMauricioEscobarRivera.h"
#include "LorenaReginaGarciaFelix.h"
#include "DiegoCastilloSalazar.h"
#include "IberArmandoSilvaGonzalez.h"

#include <iostream>
#include <string>

using namespace std;

int main() {
    int opcion;
    cout << "Seleccione el programa a ejecutar:" << endl;
    cout << "1. Dibujar un triangulo" << endl;
    cout << "2. Verificar si una palabra es palindromo" << endl;
    cout << "3. Mostrar combinaciones de dados para un puntaje" << endl;
    cout << "4. Numero de primos que desea ver " << endl;
    cout << "Opcion: ";
    cin >> opcion;

    switch (opcion) {
    case 1: {
        int tamano;
        cout << "Ingrese el tamano del triangulo: ";
        cin >> tamano;
        dibujarTriangulo(tamano);
        break;
    }
    case 2: {
        string palabra;
        cout << "Ingrese una palabra: ";
        cin >> palabra;
        if (esPalindromo(palabra)) {
            cout << "La palabra " << palabra << " es un palindromo" << endl;
        }
        else {
            cout << "La palabra " << palabra << " no es un palindromo" << endl;
        }
        break;
    }
    case 3: {
        int puntaje;
        cout << "Ingrese el puntaje: ";
        cin >> puntaje;
        combinacionesDados(puntaje);
        break;
    }
    case 4: {
        int n;
        cout << "Ingrese el numero de primos que desea ver: ";
        cin >> n;

        IberArmandoSilvaGonzalez obj;
        vector<int> primos = obj.NPrimos(n);

        cout << "Los primeros " << n << " numeros primos son: ";
        for (int primo : primos) {
            cout << endl;
            cout << primo << " ";
        }
        break;
    }
    default:
        cout << "Opcion no valida" << endl;
        break;
    }

    return 0;
}
