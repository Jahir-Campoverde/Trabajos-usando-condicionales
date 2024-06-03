#include <stdio.h>

int main() {
    printf("CONTAR EL NUMERO DE DIGITOS\n");
    int num;
    int temp; // Quitamos la inicialización aquí
    int cantidad1 = 0;
    int cantidad2 = 0;
    int cantidad3 = 0;

    printf("Ingrese un numero de varios digitos\n");
    scanf("%d", &num);
    temp = num; // Ahora inicializamos temp después de leer el valor de num

    printf("CONDICIONAL FOR\n");
    for (cantidad1 = 0; temp != 0; cantidad1++) {
        temp /= 10;
    }
    printf("El numero %d tiene %d digitos\n", num, cantidad1);

    printf("CONDICIONAL WHILE\n");
    temp = num; // Reiniciamos temp al valor original de num
    while (temp != 0) {
        temp /= 10;
        cantidad2++;
    }
    printf("El numero %d tiene %d digitos\n", num, cantidad2);

    printf("CONDICIONAL DO WHILE\n");
    temp = num; // Reiniciamos temp al valor original de num
    do {
        temp /= 10;
        cantidad3++;
    } while (temp != 0);
    printf("El numero %d tiene %d digitos\n", num, cantidad3);

    return 0;
}