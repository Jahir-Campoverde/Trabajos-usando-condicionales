#include <stdio.h>
#include <stdbool.h>

// FUNCION PARA VERIFICAR SI UN NUMERO ES PRIMO O NO 
bool es_primo(int numero) {
    if (numero <= 1) {
        return false;
    }
    if (numero == 2) {
        return true;
    }
    if (numero % 2 == 0) {
        return false;
    }
    for (int i = 3; i * i <= numero; i += 2) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

// CONDICIONAL FOR
int contar1(int n) {
    int contador = 0;
    for (int i = 2; i <= n; i++) {
        if (es_primo(i)) {
            contador++;
        }
    }
    return contador;
}

// CONDICIONAL WHILE
int contar2(int n) {
    int contador = 0;
    int i = 2;
    while (i <= n) {
        if (es_primo(i)) {
            contador++;
        }
        i++;
    }
    return contador;
}

// CONDICIONAL DO WHILE
int contar3(int n) {
    int contador = 0;
    int i = 2;
    do {
        if (es_primo(i)) {
            contador++;
        }
        i++;
    } while (i <= n);
    return contador;
}

int main() {
    printf("CONTAR NUMEROS PRIMOS DESDE 1 HASTA N \n");
    int n;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);

    printf(" hay %d numeros primos desde 1 hasta %d\n", contar1(n), n);
    printf(" hay %d numeros primos desde 1 hasta %d\n", contar2(n), n);
    printf(" hay %d numeros primos desde 1 hasta %d\n", contar3(n), n);

    return 0;
}