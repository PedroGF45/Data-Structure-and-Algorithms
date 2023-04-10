//
// Created by Brito on 15/03/2023.
//

#ifndef DATA_STRUCTURE_AND_ALGORITHMS_RETANGULO_H
#define DATA_STRUCTURE_AND_ALGORITHMS_RETANGULO_H


#include "ponto.h"
struct retangulo {
    ponto superiorEsquerdo;
    ponto inferiorDireito;
};

retangulo * defineRetangulo(const ponto* const vPontos, int n);

int calculaArea(const retangulo* const pRec);


#endif //DATA_STRUCTURE_AND_ALGORITHMS_RETANGULO_H
