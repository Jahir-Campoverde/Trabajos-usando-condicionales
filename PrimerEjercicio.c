#include<stdio.h>
int main(){
printf("CALCULAR LA SUMA DE LOS DIGITOS DE UN NUMERO, USANDO TRES CONDICIONALES\n");

printf("CONDICIONAL FOR\n");

int suma = 0;
int numero;
int digito;
printf("Ingrese un numero de dos digitos\n");
scanf("%d",&numero);

for (; numero != 0; numero /=10){
    digito = numero %10;
    suma += digito;
}
printf("El resultado es %d\n",suma);

printf("CONDICIONAL WHILE\n");

while (numero !=0)
{
    digito = numero %10;
    suma += digito;
    numero /=10;
}
printf("El resultado es %d\n",suma);

printf("CONDICIONAL DO WHILE\n");

do
{
    digito = numero %10;
    suma += digito;
    numero /=10;

} while (numero != 0);
printf("El resultado es %d\n",suma);
    return 0;
}