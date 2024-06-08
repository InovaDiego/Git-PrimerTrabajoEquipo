"Calculadora de Funciones, Lorena Regina García Félix"

#include <iostream>
#include <cmath>

using namespace std;

    int op;
    float valor1;
    float valor2;

    void Menu();
    void PedirValor1();
    void PedirValor2();
    float Sumar();
    float Restar();
    void MostrarResultado(float);
    
    int main()
{
    float resultado;
    do
    {
        Menu();
        switch(op)
        {
            case 1:
                //Sumar
                PedirValor1();
                PedirValor2();
                resultado = Sumar ();
                MostrarResultado(resultado);
            break;
            case 2:
                //Resta 
                PedirValor1();
                PedirValor2();
                resultado = Restar ();
                MostrarResultado(resultado);
            break;
        }
    } while(op!=10);    

    return 0;
}

void Menu ()
{
    cout<<"\n1-Sumar"<<endl;
    cout<<"2-Restar "<<endl;
    cout<<"3-Multiplicar"<<endl;
    cout<<"4-Dividir"<<endl;
    cout<<"5-Raíz"<<endl;
    cout<<"6-Potencia"<<endl;
    cout<<"7-Seno"<<endl;
    cout<<"8-Coseno"<<endl;
    cout<<"9-Tangente"<<endl;
    cout<<"10-Salir"<<endl;
    cout<<"Introduce un valor ";
    cin>>op;
}

void PedirValor1()
{
    cout<<"Introduce el valor 1: ";
    cin>>valor1;
}
void PedirValor2()
{
    cout<<"Introduce el valor 2: ";
    cin>>valor2;
}
float Sumar()
{
    float result = valor1 + valor2;
    return result;
}
float Restar()
{
    float result = valor1 + valor2;
    return result;
}
float Multiplicar()
{
    float result = valor1 * valor2;
    return result;
}

float Dividir()
{
    if (valor2 != 0)
    {
        float result = valor1 / valor2;
        return result;
    }
    else
    {
        cout << "Error: No es posible dividir entre cero." << endl;
        return 0; // Puedes devolver un valor específico en caso de división entre cero.
    }
}

float Raiz()
{
    if (valor1 >= 0)
    {
        float result = sqrt(valor1);
        return result;
    }
    else
    {
        cout << "Error: No es posible calcular la raíz de un número negativo." << endl;
        return 0; // Puedes elegir devolver un valor específico en caso de número negativo.
    }
}

float Potencia()
{
    float result = pow(valor1, valor2);
    return result;
}

float Seno()
{
    float result = sin(valor1);
    return result;
}

float Coseno()
{
    float result = cos(valor1);
    return result;
}

float Tangente()
{
    float result = tan(valor1);
    return result;
}

void MostrarResultado(float resultado)
{
    cout << "El resultado es: " << resultado<<endl;
}