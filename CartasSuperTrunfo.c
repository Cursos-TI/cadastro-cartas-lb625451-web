#include <stdio.h>


int main() {
//variaveis da primeira carta;
char estado1='a';
char carta1[4]="a02";
char nome1[20]="igapora";
int populacao1,turismo1=1000;
float area1=100.228;
float pib1=10937.1;
//cauculos
float densidade1,densidade2=189.666;
float percapita1,percapita2=189.666;

//variaveis da segunda carta 
 char estado2='a';
char carta2[4]="a02";
char nome2[20]="igapora";
int populacao2,turismo2=1000;
float area2=100.228;
float pib2=10937.1;

//recolhendo dados da primeira carta 

printf("Carta [01]\n");
printf("Escreva o nome da cidade: \n");
scanf("%s",nome1);
printf("Escreva uma letra de 'A a h '(representando um dos oitos estados ):\n ");
scanf("  %c",&estado1);
printf("Escreva a letra do estado seguida de um numero de 01 a 04:\n" );
scanf("  %s",carta1);
printf("Escreva o número de habitantes da cidade:\n ");
scanf("%d",&populacao1);
printf("Escreva A área da cidade em quilômetros quadrados:\n");
scanf("%f",&area1);
printf("Escreva o produto interno bruto da cidade: \n ");
scanf("%f",&pib1);
printf("Escreva A quantidade de pontos turísticos na cidade:\n");
scanf("%d",&turismo1);


 //recolhendao os dados da segunda carta

printf("Carta [02]\n");
printf("Escreva o nome da cidade:\n ");
scanf("%s",nome2);
printf("Escreva uma letra de 'A a h '(representando um dos oitos estados ):\n ");
scanf("   %c",&estado2);
printf("Escreva a letra do estado seguida de um numero de 01 a 04:\n" );
scanf("    %s",carta2);
printf("Escreva o número de habitantes da cidade: \n");
scanf("%d",&populacao2);
printf("Escreva A área da cidade em quilômetros quadrados:\n");
scanf("%f",&area2);
printf("Escreva o produto interno bruto da cidade:\n  ");
scanf("%f",&pib2);
printf("Escreva A quantidade de pontos turísticos na cidade:\n");
scanf("%d",&turismo2);
 
//calculos 
densidade1=(float)populacao1/area1;
densidade2=(float)populacao2/area2;
percapita1=pib1/(float) populacao1;
percapita2=pib2/(float) populacao2;

//saia de dados da primeira carta  

printf("carta 01:\n");
printf(" Nome da cidade:%s \n",nome1 );
printf(" Estado:%c \n",estado1 );
printf(" Códogo:%s \n",carta1 );
printf(" População:%d \n",populacao1 );
printf(" Área:%3.f \n",area1);
printf(" PIB:%3.f \n",pib1 );
printf("Numero de pontos turísticos:%d \n",turismo1 );
printf("A densidade é %3.f\n",densidade1);
printf("O pib per capita é:%3.f\n",percapita1);

//saida de dados da segunda carta

printf("carta 02: \n");
printf(" Nome da cidade:%s\n",nome2 );
printf(" Estado:%c\n",estado2 );
printf(" Códogo:%s\n",carta2 );
printf(" População:%d\n",populacao2 );
printf(" Área:%3.f\n",area2 );
printf(" PIB:%3.f\n",pib2 );
printf("Numero de pontos turísticos:%d\n",turismo2 );
printf("A densidade é %3.f\n",densidade2);
printf("O pib per capita é:%3.f\n",percapita2);






return 0;
} 
