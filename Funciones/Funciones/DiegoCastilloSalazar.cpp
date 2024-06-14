#include "DiegoCastilloSalazar.h"
#include <iostream>

void combinacionesDados(int puntaje) {
    std::cout << "Combinaciones de dos dados que suman " << puntaje << ":" << std::endl;
    bool found = false;
    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j <= 6; ++j) {
            if (i + j == puntaje) {
                std::cout << "(" << i << ", " << j << ")" << std::endl;
                found = true;
            }
        }
    }
    if (!found) {
        std::cout << "No hay combinaciones de dados que sumen " << puntaje << "." << std::endl;
    }
}
