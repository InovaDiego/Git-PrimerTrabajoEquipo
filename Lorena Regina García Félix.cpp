"Codigo simulatorio de un Banco By: Lorena Regina Garcia Félix"
#include <iostream>

using namespace std;
     // Funcion para ingresar 
    void ingresar(int &saldo){
        int cantidad;
        cout << "Ingrese la cantidad que desea abonar : ";
        cin >> cantidad;
        if(cantidad > 0){
        saldo += cantidad;
        cout << "Su saldo es: " << saldo << endl;
                        }
        else{
            cout << "No ingreso cantidad positiva" << endl;
            } 
                              }
                              
     //Funcion para retirar                          
    void retirar(int &saldo){
        int cantidad;
        cout << "Ingrese cantidad a retirar: ";
        cin >> cantidad;
        if(cantidad > 0 && saldo >= cantidad){
        saldo -= cantidad;
        cout << "Su saldo es: " << saldo << endl;
                                             }
        else if(cantidad > 0){
        cout << "No tiene saldo suficiente" << endl;
                             }
        else{
        cout << "No ingreso cantidad positiva" << endl;
        }
                             }
                             
    
int main()
{
    int saldo = 1000;
    char opcion;
    do{
        cout << "  Bienvenidos a Banco mexicano RRL  " << endl;
        cout << " A continuacion las opciones son: " << endl;
        cout << "1. Ingresar dinero en efectivo " << endl;
        cout << "2. Retirar dinero en efectivo" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        switch(opcion){
            case '1':
                ingresar(saldo);
                break;
            case '2':
                retirar(saldo);
                break;
            case '3':
                cout << "  Cajeros RRL agradece su preferencia  " << endl;
                break;
            default:
                cout << "Opcion invalida" << endl;
        }
    }while(opcion != '3');

    return 0;
}