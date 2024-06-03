#include <stdio.h>
int main(){

printf("EL INVERSO DE UN NUMERO, USANDO TRES CONDICIONALES\n");

printf("CONDICIONAL FOR\n");

int inverso = 0;
int num;
int dig;

printf("Ingrese un numero de dos o mas digitos\n");
scanf("%d",&num);

for (;num != 0 ; num /= 10){
    dig = num % 10;
    inverso = inverso * 10 + dig;
    
}
printf("El inverso del numero es %d\n",inverso);

printf("CONDICIONAL WHILE\n");

while (num != 0){
    dig = num % 10;
    inverso = inverso * 10 + dig;
    num /= 10;
    
}
printf("El inverso del numero es %d\n",inverso);

printf("CONDICIONAL DO WHILE\n");

do {
    dig = num % 10;
    
    if(num != 0){
       inverso = inverso * 10 + dig; 
    }
    
    num /= 10;
}
while(num != 0);

printf("el inverso del numero es %d\n",inverso);
    return 0;
}