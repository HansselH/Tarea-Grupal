#include <iostream>
#include <conio.h>


//*   UTILIZAR LAS SIGUIENTES TECLAS PARA MOVERSE
//*   W = ARRIBA | S = ABAJO | A = IZQUIERDA | D = DERECHA | E = SALIR DEL PROGRAMA

void Programa_14() {
    int x = 40, y = 12;
    while (true) {
        system("cls");
        for (int i = 0; i < y; ++i) {
            std::cout << std::endl;
        }
        for (int i = 0; i < x; ++i) {
            std::cout << " ";
        }
        std::cout << "o";
        char opcion = getch();
        switch (opcion) {
            case 'w': y--; break;
            case 's': y++; break;
            case 'a': x--; break;
            case 'd': x++; break;
            case 'e': system("pause");
        }		
    }
    system("pause");
}


