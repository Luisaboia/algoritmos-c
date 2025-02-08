#include <stdio.h>

// IMPORTANTE: Lg N só será definido se N for estritamente positivo
// O piso (= floor) de um número real x é o resultado do arredondamento de x para baixo. Em outras palavras...
// ... o piso de x é o único número inteiro i tal que i ≤ x<i + 1 .
// Já o teto (= ceiling) de um número real x é o resultado do arredondamento de x para cima...
// Em outras palavras, o teto de x é o único número inteiro j tal que j − 1 < x ≤ j.

// PROBLEMA 1: Como calcular o piso de log N?

int lg(const int N) {
    int i = 0;
    int n = 1;
    while (n <= N/2) {
        n = 2*n;
        i += 1;
    }
    return i;
}

int main() {
    printf("%d\n", lg(10));
}