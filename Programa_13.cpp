#include <iostream>

void dibujarCuadrado(int lado) {
    for (int i = 0; i < lado; ++i) {
        for (int j = 0; j < lado; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

void dibujarRectangulo(int base, int altura) {
    for (int i = 0; i < altura; ++i) {
        for (int j = 0; j < base; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

void dibujarTriangulo(int altura) {
    for (int i = 0; i < altura; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

void Programa_13() {
    std::cout << "Dibujando un cuadrado de 5x5:" << std::endl;
    dibujarCuadrado(5);

    std::cout << "\nDibujando un rectangulo de base 6 y altura 4:" << std::endl;
    dibujarRectangulo(6, 4);

    std::cout << "\nDibujando un triangulo de altura 5:" << std::endl;
    dibujarTriangulo(5);

    system("pause");
}


