#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool es_primo1(int numero) {
    if (numero <= 1) {
        return false;
    }
    if (numero == 2) {
        return true;
    }
    if (numero % 2 == 0) {
        return false;
    }

    printf("CONDICIONAL FOR\n");
    for (int i = 3; i * i <= numero; i += 2) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

bool es_primo2(int numero) {
    if (numero <= 1) {
        return false;
    }
    if (numero == 2) {
        return true;
    }
    if (numero % 2 == 0) {
        return false;
    }

    printf("CONDICIONAL WHILE\n");
    int i = 3;
    while (i * i <= numero) {
        if (numero % i == 0) {
            return false;
        }
        i += 2;
    }
    return true;
}

bool es_primo3(int numero) {
    if (numero <= 1) {
        return false;
    }
    if (numero == 2) {
        return true;
    }
    if (numero % 2 == 0) {
        return false;
    }

    printf("CONDICIONAL DO WHILE\n");
    int i = 3;
    do {
        if (numero % i == 0) {
            return false;
        }
        i += 2;
    } while (i * i <= numero);
    return true;
}

int main() {
    int numero;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &numero);

    printf(" %d\n", es_primo1(numero));
    printf(" %d\n", es_primo2(numero));
    printf(" %d\n", es_primo3(numero));
printf("SI ES PRIMO DEVOLVERA 1 Y SI NO LO ES DEVOLVERA 0");
    return 0;
}