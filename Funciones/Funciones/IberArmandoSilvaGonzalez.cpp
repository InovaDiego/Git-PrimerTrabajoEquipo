#include "IberArmandoSilvaGonzalez.h"
#include <cmath>
#include <vector>


bool IberArmandoSilvaGonzalez::esPrimo(int num) {
    if (num < 2) {
        return false;
    }

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

std::vector<int> IberArmandoSilvaGonzalez::NPrimos(int n) {
    std::vector<int> primos;
    int num = 2;
    while (primos.size() < n) {
        if (esPrimo(num)) {
            primos.push_back(num);
        }
        ++num;
    }
    return primos;
}
