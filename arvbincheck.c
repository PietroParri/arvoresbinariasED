//PIETRO BORGES PARRI GRR20204445

#include <stdio.h>

typedef struct arvore {
    int dado;
    struct arvore *comeco;
    struct arvore *fim;
} Arvore;

int arv_bin_check(Arvore * a){

    if ( (a->fim != NULL) && (minimo(a->fim) < a->dado))
        return 0;

    if ( (a->comeco != NULL) && (maximo(a->comeco) > a->dado))
        return 0;

    if ((!arv_bin_check(a->comeco)) || (!arv_bin_check(a->fim)))
        return 0;

    if (a == NULL)
        return 1;

return 1;
}

void main(){
}

int minimo(struct arvore * a){

    int maxc = minimo(a->comeco);
    int maxf = minimo(a->fim);
    int x = 0;

    if (a == NULL) {
        return 0;
    }
        if (maxc < maxf) {
            x = maxc;
        }else {
            x = maxf;
        }
    if (x > a->dado) {
        x = a->dado;
    }

return x;
}

int maximo(struct arvore* a){

    int maxc = maximo(a->comeco);
    int maxf = maximo(a->fim);
    int x = 0;

    if (a == NULL) {
        return 0;
    }
        if (maxc > maxf) {
            x = maxc;
        }else {
            x = maxf;
        }

    if (x < a->dado) {
        x = a->dado;
    }

return x;
}

