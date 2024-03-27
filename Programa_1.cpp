#include <iostream>

using namespace std;

// Funciones para realizar las operaciones
double suma(double num1, double num2) {
    return num1 + num2;
}

double resta(double num1, double num2) {
    return num1 - num2;
}

double multiplicacion(double num1, double num2) {
    return num1 * num2;
}

double division(double num1, double num2) {
    // Manejo de division por cero
    if (num2 == 0) {
        cout << "Error: No se puede dividir por cero." << endl;
        return 0;
    }
    return num1 / num2;
}

void Programa_1() {
    double num1, num2;
    char operacion;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Elija la operacion a realizar (+, -, *, /): ";
    cin >> operacion;

    switch (operacion) {
        case '+':
            cout << "La suma es: " << suma(num1, num2) << endl;
            break;
        case '-':
            cout << "La resta es: " << resta(num1, num2) << endl;
            break;
        case '*':
            cout << "La multiplicacion es: " << multiplicacion(num1, num2) << endl;
            break;
        case '/':
            cout << "La division es: " << division(num1, num2) << endl;
            break;
        default:
            cout << "Operacion no valida." << endl;
            break;
    }

    system("pause");
}

