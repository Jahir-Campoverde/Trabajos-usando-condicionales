#include <stdio.h>

int main() {
    printf("Calcular el producto de los primeros n terminos de una serie geometrica\n");

    int primer_termino = 2;
    int razon = 2;
    int n;

    printf("Ingrese el numero de terminos a calcular: ");
    scanf("%d", &n);

    
    printf("CONDICIONAL FOR\n");

    int producto1 = 1;
    int primer_termino_for = primer_termino; 
    for (int i = 0; i < n; i++) {
        producto1 *= primer_termino_for;
        primer_termino_for *= razon;
    }
    printf("Producto: %d\n", producto1);

   
    printf("CONDICIONAL WHILE\n");

    int producto2 = 1;
    int primer_termino_while = primer_termino; 
    int i = 0;
    while (i < n) {
        producto2 *= primer_termino_while;
        primer_termino_while *= razon;
        i++;
    }
    printf("Producto: %d\n", producto2);

    
    printf("CONDICIONAL DO WHILE\n");
    
    int producto3 = 1;
    int primer_termino_do_while = primer_termino; 
    i = 0;
    if (n > 0) {
        do {
            producto3 *= primer_termino_do_while;
            primer_termino_do_while *= razon;
            i++;
        } while (i < n);
    }
    printf("Producto : %d\n", producto3);

    return 0;
}
