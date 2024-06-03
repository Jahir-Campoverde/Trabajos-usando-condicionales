#include <stdio.h>

// CONDICIONAL FOR
int suma1(int n) {
    int suma = 0;
    for (int i = 2; i <= n; i += 2) {
        suma += i;
    }
    return suma;
}

// CONDICIONAL WHILE
int suma2(int n) {
    int suma = 0;
    int i = 2;
    while (i <= n) {
        suma += i;
        i += 2;
    }
    return suma;
}

// CONDICIONAL DO WHILE
int suma3(int n) {
    int suma = 0;
    int i = 2;
    do {
        suma += i;
        i += 2;
    } while (i <= n);
    return suma;
}

int main() {
    printf("SUMA DE NUMEROS PARES\n");
    int n;
    printf("Ingrese un nUmero entero positivo: ");
    scanf("%d", &n);

    printf(" la suma de todos los numeros pares desde 1 hasta %d es: %d\n", n, suma1(n));
    printf(" la suma de todos los numeros pares desde 1 hasta %d es: %d\n", n, suma2(n));
    printf(" la suma de todos los numeros pares desde 1 hasta %d es: %d\n", n, suma3(n));

    return 0;
}