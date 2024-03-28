#include <iostream>
#include <cmath> // Incluir la biblioteca para usar la función sqrt (raíz cuadrada)

using namespace std;

void Programa_16() {
    float cateto1, cateto2, hipotenusa;

    // Solicitar al usuario que ingrese los dos catetos del triángulo rectángulo
    cout << "Ingrese la longitud del primer cateto: ";
    cin >> cateto1;

    cout << "Ingrese la longitud del segundo cateto: ";
    cin >> cateto2;

    // Calcular la hipotenusa usando el teorema de Pitágoras
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    // Mostrar el resultado
    cout << "La longitud de la hipotenusa es: " << hipotenusa << endl;

    return 0;
}system("pause");

