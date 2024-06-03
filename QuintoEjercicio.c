#include<stdio.h>
int main(){

    printf("SERIE FIBONACCI\n");

    printf("CONDICIONAL FOR\n");

    int n, primero = 0, segundo = 1, siguiente;

    printf("Ingrese una cantidad que desea ver\n ");
    scanf("%d", &n);

    printf("Los primeros %d numeros de la serie de Fibonacci son:\n", n);

    for (int i = 0; i < n; i++) {
        if (i <= 1)
            siguiente = i;
        else {
            siguiente = primero + segundo;
            primero = segundo;
            segundo = siguiente;
        }
        printf("%d ", siguiente);
    }

    printf("\n");

    printf("CONDICIONAL WHILE\n");



printf ("CONDICIONAL DO WHILE\n");


    return 0;
}