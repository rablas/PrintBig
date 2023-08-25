// PrintBig.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>

int main(int argc, char* argv[])
{
    //Declaração de constantes
    const int cor_normal{ 7 };

    //Inicialização de Parâmetros
    std::string numero_str{ "" };
    int cor{ 15 };
    int espera{ 500 };
    int separador{ 2 };
    int esquerda{ 10 };

    //Formatos de números
    std::vector<std::string> formato{
        " 000   1   222  333    4 55555 666 77777 888  999 ",
        "0   0 11  2   23   3  44 5    6        78   89   9",
        "0   01 1     2     3 4 4 5    6       7 8   89   9",
        "0   0  1    2    33 4  4 5555 6666   7   888  9999",
        "0   0  1   2       344444    56   6  7  8   8    9",
        "0   0  1  2    3   3   4     56   6 7   8   8    9",
        " 000 1111122222 333    4 5555  666 7     888  999 "
    };

    //Leitura de Parâmetros
    //Verificar se string foi passada
    if (argc < 2) {
        exit(1);
    }
    numero_str = argv[1];

    //Verifica se cor foi passada
    if (argc > 2) {
        try {
            cor = std::stoi(argv[2]);
        }
        catch(...) {}
    }

    //Verifica se espera foi passada
    if (argc > 3) {
        try {
            espera = std::stoi(argv[3]);
        }
        catch (...) {}
    }

    //Verifica se separador foi passado
    if (argc > 4) {
        try {
            separador = std::stoi(argv[4]);
        }
        catch (...) {}
    }

    //Verifica se esquerda foi passada
    if (argc > 5) {
        try {
            esquerda = std::stoi(argv[5]);
        }
        catch (...) {}
    }

    //change color
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdout, cor);

    std::cout << "\n";
    for (int linha = 0; linha < 7; linha++) {
        std::cout << std::string(esquerda, ' ');
        for (int caractere = 0; caractere < numero_str.length(); caractere++) {
            int algarismo = stoi (numero_str.substr(caractere, 1));
            if ((algarismo >= 0) && (algarismo <= 9)) {
                std::cout << formato[linha].substr(algarismo * 5, 5) << std::string(separador, ' ');
            }
        }
        std::cout << "\n";
    }
    SetConsoleTextAttribute(hStdout, cor_normal);
    std::cout << "\n";
    Sleep(espera);

}
