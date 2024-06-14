#include "LorenaReginaGarciaFelix.h"
#include <algorithm>

bool esPalindromo(const std::string& palabra) {
    std::string inversa = palabra;
    std::reverse(inversa.begin(), inversa.end());
    return palabra == inversa;
}
