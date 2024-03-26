#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Funcion para convertir un digito en su representacion en letras
string convertir_Digito(int digito) {
    switch (digito) {
        case 0:
            return "cero";
        case 1:
            return "uno";
        case 2:
            return "dos";
        case 3:
            return "tres";
        case 4:
            return "cuatro";
        case 5:
            return "cinco";
        case 6:
            return "seis";
        case 7:
            return "siete";
        case 8:
            return "ocho";
        case 9:
            return "nueve";
        default:
            return "";
    }
}

// Funcion para convertir un numero entero en su representacion en letras
string entero_A_Letras(int numero) {
    string resultado = "";

    // Manejo del signo negativo si el numero es negativo
    if (numero < 0) {
        resultado = "menos ";
        numero *= -1;
    }

    // Convertir el numero en digitos
    stringstream ss;
    ss << numero;
    string numeroStr = ss.str();

    for (size_t i = 0; i < numeroStr.length(); ++i) {
        char c = numeroStr[i];
        resultado += convertir_Digito(c - '0') + " ";
    }

    return resultado;
}

void Programa_7() {
    double numero;

    // Solicitar al usuario que ingrese un numero entero con decimal
    cout << "Ingrese un numero entero con decimal: ";
    cin >> numero;

    // Extraer la parte entera y decimal del número
    int parteEntera = static_cast<int>(numero);
    int parteDecimal = static_cast<int>((numero - parteEntera) * 100); // Multiplicamos por 100 para obtener dos decimales

    // Convertir la parte entera y decimal a letras y mostrar el resultado
    cout << "El numero " << numero << " en letras es: " << entero_A_Letras(parteEntera) << " punto " << entero_A_Letras(parteDecimal) << endl;

    system("pause");
}


