#include <iostream>
#include <string>
#include <algorithm> 

std::string decimalAHexadecimal(int decimal) {
    std::string hexadecimal = "";
    while (decimal > 0) {
        int residuo = decimal % 16;
        char digitHexadecimal = (residuo < 10) ? ('0' + residuo) : ('A' + residuo - 10);
        hexadecimal += digitHexadecimal;

        decimal /= 16;
    }
    std::reverse(hexadecimal.begin(), hexadecimal.end());
    return hexadecimal;
}

void Programa_12() {
    int numeroDecimal;
    std::cout << "Introduce un numero decimal: ";
    std::cin >> numeroDecimal;

    std::string hexadecimal = decimalAHexadecimal(numeroDecimal);
    std::cout << "El numero hexadecimal equivalente es: " << hexadecimal << std::endl;

    system("pause");
}
