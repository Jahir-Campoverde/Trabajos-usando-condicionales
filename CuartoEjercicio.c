#include<stdio.h>

int main() {
    float num, root;
    printf("CALCULAR LA RAIZ CUBICA DE UN NUMERO UTILIZANDO SUMAS SUCESIVAS, CON TRES CONDICIONALES\n");

    printf("Ingrese el numero que desea calcular la raiz cubica\n");
    scanf("%f", &num);

    printf("CONDICIONAL FOR\n");

    for(int i = 1; i * i * i <= num; i++) {
        root = i;
    }
    printf("La raiz cubica aproximada de %.0f es %.0f\n", num, root);

    printf("CONDICIONAL WHILE\n");

    int i = 1;

    while(i * i * i <= num) {
        root = i;
        i++;
    }
    printf("La raiz cubica aproximada de %.0f es %.0f\n", num, root);

    printf("CONDICIONAL DO WHILE\n");

    i = 1;

    do {
        root = i;
        i++;
    } while (root * root * root <= num);

    root--; // Decrementar root en 1 para obtener el valor correcto
    printf("La raiz cubica aproximada de %.0f es %.0f\n", num, root);

    return 0;
}