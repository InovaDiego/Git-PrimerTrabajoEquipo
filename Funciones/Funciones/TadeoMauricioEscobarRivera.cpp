#include "TadeoMauricioEscobarRivera.h"
#include <iostream>

void dibujarTriangulo(int tamano) {
    for (int i = 1; i <= tamano; ++i) {
        // Imprimir espacios
        for (int j = 0; j < tamano - i; ++j) {
            std::cout << " ";
        }
        // Imprimir asteriscos
        for (int k = 0; k < 2 * i - 1; ++k) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
