//
// Created by Brito on 15/03/2023.
//

#ifndef DATA_STRUCTURE_AND_ALGORITHMS_PONTO_H
#define DATA_STRUCTURE_AND_ALGORITHMS_PONTO_H

struct ponto {
    int x;
    int y;
};

void lePontos(ponto* const vPontos, int n);

void escrevePontos(const ponto* const vPontos, int n);

#endif //DATA_STRUCTURE_AND_ALGORITHMS_PONTO_H
