#include <stdio.h>

// CONDICIONAL FOR
double producto1(int n) {
    double producto = 1;
    for (int i = 1; i <= n; i++) {
        producto *= 1.0 / i;
    }
    return producto;
}

// CONDICIONAL WHILE
double producto2(int n) {
    double producto = 1;
    int i = 1;
    while (i <= n) {
        producto *= 1.0 / i;
        i++;
    }
    return producto;
}

// CONDICIONAL DO WHILE
double producto3(int n) {
    double producto = 1;
    int i = 1;
    do {
        producto *= 1.0 / i;
        i++;
    } while (i <= n);
    return producto;
}

int main() {
    printf("CALCULAR EL PRODUCTO DE LA SERIE\n");
    int n;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);

    printf("el producto de la serie 1 * 1/2 * 1/3 * ... * 1/%d es: %.6f\n", n, producto1(n));
    printf("el producto de la serie 1 * 1/2 * 1/3 * ... * 1/%d es: %.6f\n", n, producto2(n));
    printf("el producto de la serie 1 * 1/2 * 1/3 * ... * 1/%d es: %.6f\n", n, producto3(n));

    return 0;
}