#include <stdio.h>

int main() {
    int n, i, suma1 = 0, suma2 = 0, suma3 = 0;

    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    printf("CONDICIONAL FOR\n");
    for (i = 1; i <= n; i++) {
        suma1 += i;
    }
printf("La suma de los primeros %d terminos de la serie aritmetica es: %d\n", n, suma1);

    printf("CONDICIONAL WHILE\n");
    i = 1;
    while (i <= n) {
        suma2 += i;
        i++;
    }
printf("La suma de los primeros %d terminos de la serie aritmetica  es: %d\n", n, suma2);


printf("CONDICIONAL DO WHILE\n");
    i = 1;
    do {
        suma3 += i;
        i++;
    } while (i <= n);
    
    printf("La suma de los primeros %d terminos de la serie aritmetica es: %d\n", n, suma3);

    return 0;
}