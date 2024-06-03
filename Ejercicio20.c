#include <stdio.h>

// UNA FUNCION PARA CALCULAR EL FACTORIAL
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// CONDICIONAL FOR
int su(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += factorial(i);
    }
    return suma;
}

// CONDICIONAL WHILE
int sum(int n) {
    int suma = 0;
    int i = 1;
    while (i <= n) {
        suma += factorial(i);
        i++;
    }
    return suma;
}

// CONDICIONAL DO WHILE
int suma3(int n) {
    int suma = 0;
    int i = 1;
    do {
        suma += factorial(i);
        i++;
    } while (i <= n);
    return suma;
}

int main() {
    printf("CALCULAR LA SUMA DE LOS FACTORIALES DE LOS PRIMEROS N NUMEROS\n");
    int n;
    printf("Ingrese un numero entero positivo para calcular la suma de los factoriales de los primeros n numeros: ");
    scanf("%d", &n);

    printf("la suma de los factoriales de los primeros %d numeros es: %d\n", n, su(n));
    printf("la suma de los factoriales de los primeros %d numeros es: %d\n", n, sum(n));
    printf("la suma de los factoriales de los primeros %d numeros es: %d\n", n, suma3(n));

    return 0;
}