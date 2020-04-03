#include <stdio.h>

// PROGRAMA LÊ 3 TIPOS DE DADOS E IMPRIME OS MESMOS NA TELA
int main (){
    
char name [10];
int age;
float hight;

printf("Digite seu nome:\n");
scanf("%10s", name);
printf("Digite sua idade:\n");
scanf("%d", &age);
printf("Digite sua altura:\n");
scanf("%f", &hight);
printf("Ola %s vc tem %d anos e %.2f de altura \n", name, age, hight);

return 0;
}