#include<stdio.h>

int main() {
    printf("FACTORIAL DE UN NUMERO\n");
    printf("CONDICIONAL FOR\n");

    int num, fact = 1;
    
    printf("Ingrese un numero para calcular su factorial: ");
    scanf("%d", &num);
    
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    
    printf("%d! = %d\n", num, fact);
    
    printf("CONDICIONAL WHILE\n");

    fact = 1; 
    int i = 1; 

    while (i <= num) {
        fact *= i;
        i++;
    }
    
    printf("%d! = %d\n", num, fact);

    printf("CONDICIONAL DO WHILE\n");

    fact = 1; 
    i = 1; 

    do {
        fact *= i;
        i++;
    } while (i <= num);
    
    printf("%d! = %d\n", num, fact);

    return 0;
}