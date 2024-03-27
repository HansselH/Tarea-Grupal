#include <iostream>

using namespace std;

void mostrarMultiplicacionGrafica(int num1, int num2) {
    int resultado = num1 * num2;

    // Imprimir los n�meros y el signo de multiplicaci�n
    cout << "  " << num1 << endl;
    cout << "x " << num2 << endl;
    cout << "----" << endl;

    // Realizar la multiplicaci�n gr�ficamente
    int temp = num2;
    int espacios = 0;
    while (temp > 0) {
        int digito = temp % 10;
        int multiplicacion = num1 * digito;
        cout << multiplicacion;
        for (int i = 0; i < espacios; ++i)
            cout << " ";
        cout << endl;
        temp /= 10;
        espacios++;
    }

    // L�nea divisoria
    cout << "----" << endl;
    // Resultado final
    cout << resultado << endl;
}

void Programa_10() {
    int num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "El resultado de la multiplicacion es: " << num1 * num2 << endl;

    // Mostrar la multiplicaci�n gr�ficamente
    cout << "\nMultiplicacion grafica:\n" << endl;
    mostrarMultiplicacionGrafica(num1, num2);

    system("pause"); 
}
