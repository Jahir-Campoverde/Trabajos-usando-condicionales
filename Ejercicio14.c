#include <stdio.h>

// CONDICIONAL FOR
int suma_cuadrados1(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i * i;
    }
    return suma;
}

// CONDICIONAL FOR
int suma_cuadrados2(int n) {
    int suma = 0;
    int i = 1;
    while (i <= n) {
        suma += i * i;
        i++;
    }
    return suma;
}

// CONDICIONAL  DO WHILE
int suma_cuadrados3(int n) {
    int suma = 0;
    int i = 1;
    do {
        suma += i * i;
        i++;
    } while (i <= n);
    return suma;
}

int main() {
    printf("CALCULA LA SUMA DE LOS CUADRADO DE LOS PRIMEROS N NUMEROS NATURALES\n ");
    int n;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);

    printf("la suma de los cuadrados de los primeros %d numeros naturales es: %d\n", n, suma_cuadrados1(n));
    printf("la suma de los cuadrados de los primeros %d numeros naturales es: %d\n", n, suma_cuadrados2(n));
    printf("la suma de los cuadrados de los primeros %d numeros naturales es: %d\n", n, suma_cuadrados3(n));

    return 0;
}