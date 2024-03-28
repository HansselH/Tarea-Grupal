#include <iostream>

using namespace std;

class CajeroAutomatico {
private:
    float saldo;

public:
    // Constructor
    CajeroAutomatico() {
        saldo = 0.0;
    }

    // Función para verificar saldo
    void verificarSaldo() {
        cout << "Su saldo actual es: Q" << saldo << endl;
    }

    // Función para depositar dinero
    void depositar(float cantidad) {
        saldo += cantidad;
        cout << "Se ha depositado Q" << cantidad << " con éxito." << endl;
    }

    // Función para retirar dinero
    void retirar(float cantidad) {
        if (cantidad <= saldo) {
            saldo -= cantidad;
            cout << "Se ha retirado Q" << cantidad << " con éxito." << endl;
        } else {
            cout << "Saldo insuficiente para realizar esta operación." << endl;
        }
    }
};

void Programa_15() {
    CajeroAutomatico cajero;

    int opcion;
    float cantidad;

    do {
        cout << "\nBienvenido al Cajero Automatico" << endl;
        cout << "1. Verificar Saldo" << endl;
        cout << "2. Depositar Dinero" << endl;
        cout << "3. Retirar Dinero" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cajero.verificarSaldo();
                break;
            case 2:
                cout << "Ingrese la cantidad a depositar: Q";
                cin >> cantidad;
                cajero.depositar(cantidad);
                break;
            case 3:
                cout << "Ingrese la cantidad a retirar: Q";
                cin >> cantidad;
                cajero.retirar(cantidad);
                break;
            case 4:
                cout << "Gracias por utilizar nuestro servicio." << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, intente de nuevo." << endl;
                break;
        }
    } while (opcion != 4);

system("pause");
}

