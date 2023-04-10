//
// Created by Brito on 15/03/2023.
//

#include <iostream>
#include "Retangulo.h"

using namespace std;

retangulo * defineRetangulo(const ponto* const vPontos, int n) {
    retangulo * ret = new retangulo; //inicializacao do apontador da variavel ret.
    int xmax=vPontos[0].x, xmin = vPontos[0].x, ymax = vPontos[0].y, ymin = vPontos[0].y; //inicializa os valores de cada ponto usado nos vectores.
    for (int i = 0; i < n; i++) {
        if (vPontos[i].x < xmin) { //verifica se os primeiro valores para x, qual é minimo.
            xmin = vPontos[i].x;
        }
        if (vPontos[i].x > xmax) { // verifica se os primeiro valores para x, qual é máximo.
            xmax = vPontos[i].x;
        }
        if (vPontos[i].y < ymin) { // acontece o mesmo para o y.
            ymin = vPontos[i].y;
        }
        if (vPontos[i].y > ymax) { // acontece o mesmo para o y.
            ymax = vPontos[i].y;
        }
    }
    ret->superiorEsquerdo.x = xmin; //primeiro ponto tem o x minimo.
    ret->superiorEsquerdo.y = ymax; // primeiro ponto tem o y maximo.
    ret->inferiorDireito.x = xmax; // segundo ponto tem x maximo.
    ret->inferiorDireito.y = ymin; // segundo ponto tem y minimo.
    cout << "Mostra as coordenadas do retangulo: " << "(" << ret->superiorEsquerdo.x << "," << ret->superiorEsquerdo.y << ")" << endl;
    cout << "Mostra as coordenadas do retangulo: " << "(" << ret->inferiorDireito.x << "," << ret->inferiorDireito.y << ")" << endl;
    return ret;
}

int calculaArea(const retangulo* const pRec) {
    return (pRec->inferiorDireito.x - pRec->superiorEsquerdo.x) * (pRec->superiorEsquerdo.y - pRec->inferiorDireito.y);
}
