#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <vector>

using namespace std;

const int BOARD_SIZE = 4; // Tamaño del tablero
const int TOTAL_PAIRS = (BOARD_SIZE * BOARD_SIZE) / 2; // Total de pares

// Función para imprimir el tablero
void printBoard(const vector<vector<char>>& board, const vector<vector<bool>>& revealed) {
    for (int i = 0; i < BOARD_SIZE; ++i) {
        for (int j = 0; j < BOARD_SIZE; ++j) {
            if (revealed[i][j]) {
                cout << board[i][j] << " ";
            } else {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

// Función para chequear si el juego ha terminado
bool isGameOver(const vector<vector<bool>>& revealed) {
    for (int i = 0; i < BOARD_SIZE; ++i) {
        for (int j = 0; j < BOARD_SIZE; ++j) {
            if (!revealed[i][j]) {
                return false;
            }
        }
    }
    return true;
}

void Programa_20() {
    srand(time(0)); // Semilla para generar números aleatorios

    vector<char> symbols;
    for (char c = 'A'; c < 'A' + TOTAL_PAIRS; ++c) {
        symbols.push_back(c);
        symbols.push_back(c);
    }

    random_shuffle(symbols.begin(), symbols.end()); // Mezclar los símbolos

    vector<vector<char>> board(BOARD_SIZE, vector<char>(BOARD_SIZE, ' '));
    vector<vector<bool>> revealed(BOARD_SIZE, vector<bool>(BOARD_SIZE, false));

    // Llenar el tablero con los símbolos mezclados
    int symbolIndex = 0;
    for (int i = 0; i < BOARD_SIZE; ++i) {
        for (int j = 0; j < BOARD_SIZE; ++j) {
            board[i][j] = symbols[symbolIndex++];
        }
    }

    int firstRow, firstCol, secondRow, secondCol;
    while (!isGameOver(revealed)) {
        // Imprimir el tablero actual
        printBoard(board, revealed);

        // Pedir al jugador que elija la primera carta
        cout << "Ingrese la fila y columna de la primera carta (0-" << BOARD_SIZE - 1 << "): ";
        cin >> firstRow >> firstCol;

        // Mostrar la carta elegida
        revealed[firstRow][firstCol] = true;
        printBoard(board, revealed);

        // Pedir al jugador que elija la segunda carta
        cout << "Ingrese la fila y columna de la segunda carta (0-" << BOARD_SIZE - 1 << "): ";
        cin >> secondRow >> secondCol;

        // Mostrar la segunda carta
        revealed[secondRow][secondCol] = true;
        printBoard(board, revealed);

        // Comprobar si las cartas coinciden
        if (board[firstRow][firstCol] != board[secondRow][secondCol]) {
            cout << "¡Las cartas no coinciden! Intente de nuevo." << endl;
            revealed[firstRow][firstCol] = false;
            revealed[secondRow][secondCol] = false;
        } else {
            cout << "¡Coinciden! Buen trabajo." << endl;
        }
    }

    cout << "¡Felicidades! ¡Has ganado el juego!" << endl;

system("pause");
}

