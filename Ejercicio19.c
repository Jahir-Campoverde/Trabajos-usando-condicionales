#include <stdio.h>

// CONDICIONAL FOR
int num1(int n) {
    int triangular = 0;
    for (int i = 1; i <= n; i++) {
        triangular += i;
    }
    return triangular;
}

// CONDICIONAL WHILE
int num2(int n) {
    int triangular = 0;
    int i = 1;
    while (i <= n) {
        triangular += i;
        i++;
    }
    return triangular;
}
//CONDICIONAL DO WHILE
int num3(int n) {
    int triangular = 0;
    int i = 1;
    do {
        triangular += i;
        i++;
    } while (i <= n);
    return triangular;
}

int main() {
    printf("CALCULAR EL N-ESIMO NUMERO TRIANGULAR\n");
    int n;
    printf("Ingrese el valor de n para calcular el n-esimo numero triangular: ");
    scanf("%d", &n);

    printf("el %d-esimo numero triangular es: %d\n", n, num1(n));
    printf("el %d-esimo numero triangular es: %d\n", n, num2(n));
    printf("el %d-esimo numero triangular es: %d\n", n, num3(n));

    return 0;
}





