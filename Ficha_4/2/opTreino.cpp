//
// Created by Pedro Brito on 02/03/2023.
//

#include "opTreino.h"

void inserirTempos (float tempos[][], int atletas, int sessoes) {
    for (int i = 0; i < sessoes; i++) {
        for (int j = 0; i < atletas; j++) {
            cout << "GIVE THE TIME FOR ATHLETE " << tempos[j][i] << endl;
            cin >> tempos[i][j];
        }
    }
}

void escreveMediaColunas(float tempos[][], int atletas, int sessoes){
    for (int i = 0; i < sessoes; i++) {
        float sum = 0;
        for (int j = 0; j < atletas; j++) {
            sum += tempos[j][i];
        }
        cout << sum / atletas << endl;
    }
}

void escreveMinLinhas(float tempos[][], int atletas, int sessoes){
    for (int j = 0; j < atletas; j++) {
        float min = tempos[j][0];
        // i = 1 - no need to compare the first value as it's the minimum already
        for (int i = 1; i < sessoes; i++) {
            if (tempos[j][i] < min) {
                min = tempos[j][i];
            }
        }
        cout << min;
    }
}
