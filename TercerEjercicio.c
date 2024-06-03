#include<stdio.h>

int main() {
    printf("CALCULAR LA POTENCIA DE UN NUMERO UTILIZANDO SUMAS SUCESIVAS, CON TRES CONDICIONALES\n");

    printf("CONDICIONAL FOR\n");
    int exponente;
    int base;
    int resultado = 1;

    printf("Ingrese la base\n");
    scanf("%d", &base);
    printf("Ingrese el exponente\n");
    scanf("%d", &exponente);

    for(int i = 1; i <= exponente; ++i ){
        resultado *= base;
    }
    printf("El resultado de %d elevado a la %d es %d\n", base, exponente, resultado);

    printf("CONDICIONAL WHILE\n");
    int i = 1;
    resultado = 1; // Reinicializar resultado
    while(i <= exponente) {
        resultado *= base;
        i++;
    }
    printf("El resultado de %d elevado a la %d es %d\n", base, exponente, resultado);

    printf("CONDICIONAL DO WHILE\n");
    resultado = 1; // Reinicializar resultado
    i = 1; // Reinicializar i
    do {
        resultado *= base;
        i++;
    } while (i <= exponente);

    printf("El resultado de %d elevado a la %d es %d\n", base, exponente, resultado);

    return 0;
}