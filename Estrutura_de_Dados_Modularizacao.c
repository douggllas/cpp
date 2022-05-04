#include <stdio.h>
#include <math.h>
#include "Ponto.h"


int main () {

    struct ponto {
        float x;
        float y;
    }

    typedef struct ponto Ponto;
    Ponto *pto_cria(float x, float y); //cria um novo ponto

    void pto_libera(Ponto * p);// Acessa os valores "x" e "Y" de um ponto

    void pto_acessa(Ponto * p, float *x, float *y);

    void pto_atribui(Ponto * p float x, float y);

    system("pause");
    return 0;
}

Ponto * pto_cria (float x, float y) {
    Ponto *p = (Ponto *)malloc(sizeof(Ponto));
    if (p != NULL){
        p->x = x;
        p->y = y;

    }
    return p;
}