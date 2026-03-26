#include <stdio.h>


int main() {
//variaveis da primeira carta;
char estado1='a';
char carta1[4]='a02';
char nome1[20]="igapora";
int populacao1,turismo1=1000;
float area1=100.228;
float pib1=10937.1;

//variaveis da segunda carta 
 char estado2='a';
char carta2[4]="a02";
char nome2[20]="igapora";
int populacao2,turismo2=1000;
float area2=100.228;
float pib2=10937.1;

//recolhendo dados da primeira carta 

printf("Carta [01]");
printf("Escreva o nome da cidade: ");
scanf("%s",&nome1);
printf("Escreva uma letra de 'A a h '(representando um dos oitos estados ): ");
scanf("%c",&estado1);
printf("Escreva a letra do estado seguida de um numero de 01 a 04:" );
scanf("%s",&carta1);
printf("Escreva o número de habitantes da cidade: ");
scanf("%d",&populacao1);
printf("Escreva A área da cidade em quilômetros quadrad;os:");
scanf("%f",&area1);
printf("Escreva o produto interno bruto da cidade:  ");
scanf("%f",&pib1);
printf("Escreva A quantidade de pontos turísticos na cidade:");
scanf("%d",&turismo1);

 //recolhendao os dados da segunda carta

printf("Carta [02]");
printf("Escreva o nome da cidade: ");
scanf("%s",&nome2);
printf("Escreva uma letra de 'A a h '(representando um dos oitos estados ): ");
scanf("%c",&estado2);
printf("Escreva a letra do estado seguida de um numero de 01 a 04:" );
scanf("%s",&carta2);
printf("Escreva o número de habitantes da cidade: ");
scanf("%d",&populacao2);
printf("Escreva A área da cidade em quilômetros quadrados:");
scanf("%f",&area2);
printf("Escreva o produto interno bruto da cidade:  ");
scanf("%f",&pib2);
printf("Escreva A quantidade de pontos turísticos na cidade:");
scanf("%d",&turismo2);
 
//saia de dados da primeira carta  

printf("carta 01:");
printf(" Nome da cidade:%s",&nome1 );
printf(" Estado:%c",&estado1 );
printf(" Códogo:%s",&carta1 );
printf(" População:%d",&populacao1 );
printf(" Área:%f",&area1);
printf(" PIB:%f",&pib1 );
printf("Numero de pontos turísticos:%d",&turismo1 );

//saida de dados da segunda carta

printf("carta 02:");
printf(" Nome da cidade:%s",&nome2 );
printf(" Estado:%c",&estado2 );
printf(" Códogo:%s",&carta2 );
printf(" População:%d",&populacao2 );
printf(" Área:%f",&area2 );
printf(" PIB:%f",&pib2 );
printf("Numero de pontos turísticos:%d",&turismo2 );








return 0;
} 
