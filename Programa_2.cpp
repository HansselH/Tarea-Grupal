#include <iostream>

using namespace std;

// Funcion para determinar si un numero es par o impar
void determinarParImpar(int numero) {
    if (numero % 2 == 0) {
        cout << "El numero " << numero << " es par." << endl;
    } else {
        cout << "El numero " << numero << " es impar." << endl;
    }
}

void Programa_2() {
    int numero;

    // Solicitar al usuario que ingrese un numero
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    // Llamar a la funcion para determinar si el numero es par o impar
    determinarParImpar(numero);

    system("pause");
}
