#include <iostream>
#include <map>

std::string convertirANumerosRomanos(int numero) {
    std::map<int, std::string> tabla = {
        {1, "I"}, {4, "IV"}, {5, "V"}, {9, "IX"}, {10, "X"}, {40, "XL"},
        {50, "L"}, {90, "XC"}, {100, "C"}, {400, "CD"}, {500, "D"}, {900, "CM"},
        {1000, "M"}
    };

    std::string resultado;

    auto it = tabla.rbegin(); // Iniciar desde el número más grande
    while (numero > 0 && it != tabla.rend()) {
        if (numero >= it->first) {
            resultado += it->second;
            numero -= it->first;
        } else {
            ++it;
        }
    }

    return resultado;
}

void Programa_5() {
    int numero;
    std::cout << "Ingrese un numero arabigo del 1 al 1000: ";
    std::cin >> numero;

    if (numero <= 0 || numero > 1000) {
        std::cout << "El numero debe estar en el rango de 1 a 1000" << std::endl;
        return; // No devolvemos ningún valor ya que la función es de tipo void
    }

    std::string romano = convertirANumerosRomanos(numero);
    std::cout << "El numero romano equivalente es: " << romano << std::endl;

    system("pause");
}

