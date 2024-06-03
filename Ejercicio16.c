#include <stdio.h>

// CONDICIONAL FOR
double suma_serie1(int n) {
    double suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += 1.0 / i;
    }
    return suma;
}

// CONDICIONAL WHILE
double suma_serie2(int n) {
    double suma = 0;
    int i = 1;
    while (i <= n) {
        suma += 1.0 / i;
        i++;
    }
    return suma;
}

// CONDICIONAL DO WHILE
double suma_serie3(int n) {
    double suma = 0;
    int i = 1;
    do {
        suma += 1.0 / i;
        i++;
    } while (i <= n);
    return suma;
}

int main() {
    printf("Calcular la suma de la serie...\n");

    int n;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);

    printf("la suma de la serie 1 + 1/2 + 1/3 + ... + 1/%d es: %.6f\n", n, suma_serie1(n));
    printf("la suma de la serie 1 + 1/2 + 1/3 + ... + 1/%d es: %.6f\n", n, suma_serie2(n));
    printf("la suma de la serie 1 + 1/2 + 1/3 + ... + 1/%d es: %.6f\n", n, suma_serie3(n));

    return 0;
}