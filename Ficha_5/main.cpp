//
// Created by Brito on 15/03/2023.
//
#include <iostream>
#include "Ponto.h"
#include "Retangulo.h"

int main() {
    int numeroPontos = 0;
    std::cout << "Quantos pontos? \n";
    std::cin >> numeroPontos;
    ponto* vPontos = new ponto[numeroPontos];
    lePontos(vPontos, numeroPontos);
    escrevePontos(vPontos, numeroPontos);
    std::cout << "Retangulo da menor area: \n";
    retangulo * ret = defineRetangulo(vPontos, numeroPontos); //para podermos usar a funcao define temos que definir um apontador da estrutura retangulo.
    std::cout << "A area do retangulo: " << calculaArea(ret);
    return 0;
}