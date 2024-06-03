#include <stdio.h>

// CONDICIONAL FOR
int suma_cubos1(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i * i * i;
    }
    return suma;
}

// CONDICIONAL WHILE
int suma_cubos2(int n) {
    int suma = 0;
    int i = 1;
    while (i <= n) {
        suma += i * i * i;
        i++;
    }
    return suma;
}

// CONDICIONAL DO WHILE
int suma_cubos3(int n) {
    int suma = 0;
    int i = 1;
    do {
        suma += i * i * i;
        i++;
    } while (i <= n);
    return suma;
}

int main() {
    printf("SUMA DEL CUBO DE N NUMEROS NATURALES\n");
    int n;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);

    printf("la suma de los cubos de los primeros %d numeros naturales es: %d\n", n, suma_cubos1(n));
    printf("la suma de los cubos de los primeros %d numeros naturales es: %d\n", n, suma_cubos2(n));
    printf("la suma de los cubos de los primeros %d numeros naturales es: %d\n", n, suma_cubos3(n));

    return 0;
}