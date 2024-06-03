#include <stdio.h>

//CONDICIONAL FOR
int mcd1(int num1, int num2) {
    int mcd = 1;
    for (int i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            mcd = i;
        }
    }
    return mcd;
}
//CONDICIONAL WHILE
int mcd2(int num1, int num2) {
    int mcd = 1;
    int i = 1;
    while (i <= num1 && i <= num2) {
        if (num1 % i == 0 && num2 % i == 0) {
            mcd = i;
        }
        i++;
    }
    return mcd;
}
//CONDICIONAL DO WHILE
int mcd3(int num1, int num2) {
    int mcd = 1;
    int i = 1;
    do {
        if (num1 % i == 0 && num2 % i == 0) {
            mcd = i;
        }
        i++;
    } while (i <= num1 && i <= num2);
    return mcd;
}

int main() {
    printf("MCD DE DOS NUMEROS\n");
    int num1, num2;
    printf("Ingrese dos numeros enteros positivos: ");
    scanf("%d %d", &num1, &num2);

    printf("MCD(%d, %d) = %d\n", num1, num2, mcd1(num1, num2));
    printf(" MCD(%d, %d) = %d\n", num1, num2, mcd2(num1, num2));
    printf(" MCD(%d, %d) = %d\n", num1, num2, mcd3(num1, num2));

    return 0;
}