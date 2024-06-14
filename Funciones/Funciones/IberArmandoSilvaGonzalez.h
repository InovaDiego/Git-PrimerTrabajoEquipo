#pragma once
#include <cmath>
#include <vector>

class IberArmandoSilvaGonzalez
{
    
private:
    //Verificar si es primo

    bool esPrimo(int num);
public:
    //Devolver los num primos en "n" numero primos
    std::vector<int> NPrimos(int n);
};

