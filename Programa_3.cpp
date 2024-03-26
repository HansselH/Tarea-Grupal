#include <iostream>

using namespace std;

// Funciones para conversiones
double kmToMiles(double km) {
    return km * 0.621371;
}

double mToInches(double m) {
    return m * 39.3701;
}

double lbsToKg(double lbs) {
    return lbs * 0.453592;
}

double kgToLbs(double kg) {
    return kg / 0.453592;
}

void Programa_3() {
    double valor;
    char opcion;

    cout << "Seleccione la conversion a realizar:" << endl;
    cout << "a. Kilometros a Millas" << endl;
    cout << "b. Metros a Pulgadas" << endl;
    cout << "c. Libras a Kilogramos" << endl;
    cout << "d. Kilogramos a Libras" << endl;
    cout << "Ingrese la letra correspondiente a su opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 'a':
            cout << "Ingrese la cantidad de kilometros: ";
            cin >> valor;
            cout << valor << " kilometros equivalen a " << kmToMiles(valor) << " millas." << endl;
            break;
        case 'b':
            cout << "Ingrese la cantidad de metros: ";
            cin >> valor;
            cout << valor << " metros equivalen a " << mToInches(valor) << " pulgadas." << endl;
            break;
        case 'c':
            cout << "Ingrese la cantidad de libras: ";
            cin >> valor;
            cout << valor << " libras equivalen a " << lbsToKg(valor) << " kilogramos." << endl;
            break;
        case 'd':
            cout << "Ingrese la cantidad de kilogramos: ";
            cin >> valor;
            cout << valor << " kilogramos equivalen a " << kgToLbs(valor) << " libras." << endl;
            break;
        default:
            cout << "Opcion no valida." << endl;
            break;
    }

   system("pause");
}
