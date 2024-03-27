#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Funcion para determinar si una palabra es un palindromo
bool esPalindromo(string palabra) {
    string palabraInvertida = palabra;
    reverse(palabraInvertida.begin(), palabraInvertida.end());
    return palabra == palabraInvertida;
}

// Funcion para determinar si un numero es un palindromo
bool esPalindromo(int numero) {
    int numeroOriginal = numero;
    int numeroInvertido = 0;

    while (numero > 0) {
        int digito = numero % 10;
        numeroInvertido = numeroInvertido * 10 + digito;
        numero /= 10;
    }

    return numeroOriginal == numeroInvertido;
}

void Programa_4() {
    string entradaPalabra;
    int entradaNumero;

    // Verificar si es palindromo una palabra
    cout << "Ingrese una palabra para verificar si es un palindromo: ";
    cin >> entradaPalabra;
    if (esPalindromo(entradaPalabra)) {
        cout << entradaPalabra << " es un palindromo." << endl;
    } else {
        cout << entradaPalabra << " no es un palindromo." << endl;
    }

    // Verificar si es palidromo un numero
    cout << "Ingrese un numero para verificar si es un palindromo: ";
    cin >> entradaNumero;
    if (esPalindromo(entradaNumero)) {
        cout << entradaNumero << " es un palindromo." << endl;
    } else {
        cout << entradaNumero << " no es un palindromo." << endl;
    }

    system("pause");
}
