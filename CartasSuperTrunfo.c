#include <stdio.h>


int main() {
//variaveis da primeira carta;
char estado1[3]="sp";
char carta1[4]="a02";
char nome1[20]="igapora";
float populacao1;
int turismo1=1000;
double area1=100.228;
float pib1=10937.1;
float superpoder1=187.16;
float superpoder2=183.36;
float inversodensidade1=123.262;
float inversodensidade2=123.262;
int opcao;

//cauculos
float densidade1,densidade2=189.666;
float percapita1,percapita2=189.666;

//variaveis da segunda carta 
 char estado2[3]="sp";
char carta2[4]="a02";
char nome2[20]="igapora";
float populacao2;
int turismo2=1000;
double area2=100.228;
float pib2=10937.1;

//recolhendo dados da primeira carta 

printf("Carta [01]\n");
printf("Escreva o nome da cidade: \n");
scanf("%s",nome1);
printf("Escreva a sigla ,EX:'Ba'(representando o estado):\n ");
scanf("  %s",estado1);
printf("Escreva a letra do estado seguida de um numero de 01 a 04:\n" );
scanf("  %s",carta1);
printf("Escreva o número de habitantes da cidade:\n ");
scanf("%f",&populacao1);
printf("Escreva A área da cidade em quilômetros quadrados:\n");
scanf("%lf",&area1);
printf("Escreva o pib da cidade: \n ");
scanf("%f",&pib1);
printf("Escreva A quantidade de pontos turísticos na cidade:\n");
scanf("%d",&turismo1);
printf("\n");
printf("\n");
printf("\n");


 //recolhendao os dados da segunda carta

printf("Carta [02]\n");
printf("Escreva o nome da cidade:\n ");
scanf("%s",nome2);
printf("Escreva a sigla, EX:'ba'(representando o estado ):\n ");
scanf("   %s",estado2);
printf("Escreva a letra do estado seguida de um numero de 01 a 04:\n" );
scanf("    %s",carta2);
printf("Escreva o número de habitantes da cidade: \n");
scanf("%f",&populacao2);
printf("Escreva A área da cidade em quilômetros quadrados:\n");
scanf("%lf",&area2);
printf("Escreva o pib da cidade:\n  ");
scanf("%f",&pib2);
printf("Escreva A quantidade de pontos turísticos na cidade:\n");
scanf("%d",&turismo2);
printf("\n");
printf("\n");
printf("\n");
 
//calculos 
densidade1=populacao1/area1;
densidade2=populacao2/area2;
percapita1=pib1/(float) populacao1;
percapita2=pib2/(float) populacao2;
inversodensidade1=1.0/densidade1;
inversodensidade2=1.0/densidade2;
superpoder1=(float)populacao1+pib1+area1+(float)turismo1+percapita1+inversodensidade1;
superpoder2=(float)populacao2+pib2+area2+(float)turismo2+percapita2+inversodensidade2;




//menu
do
{

printf("escolha:\n");
printf("[1],para ver os dados da carta.\n");
printf("[2],para ver os dados da carta.\n");
printf("[3],comparação.\n");
printf("[4], Para sair.\n");
scanf("%d",&opcao);
printf("\n");
printf("\n");
printf("\n");
printf("\n");

switch(opcao){
case 1:
printf("Dados da primeira carta:\n");
printf("carta 01: \n");
printf(" Nome da cidade:%s\n", nome1 );
printf(" Estado:%s\n",estado1);
printf(" Código:%s\n",carta1 );
printf(" População:%f\n",populacao1 );
printf(" Área:%2.f\n",area1 );
printf(" PIB:%2.f\n",pib1 );
printf("Numero de pontos turísticos:%d\n",turismo1 );
printf("A densidade populacioal é %2.f\n",densidade1);
printf("O pib per capita é:%2.f\n",percapita1);
printf("Super poder:%2.f\n",superpoder1);
printf("\n");
printf("\n");
printf("\n");


break;
case 2:
printf("Dados da segunda carta:\n");
printf("carta 02: \n");
printf(" Nome da cidade:%s\n",nome2 );
printf(" Estado:%s\n",estado2 );
printf(" Código:%s\n",carta2 );
printf(" População:%f\n",populacao2 );
printf(" Área:%3.f\n",area2 );
printf(" PIB:%3.f\n",pib2 );
printf("Numero de pontos turísticos:%d\n",turismo2 );
printf("A densidade populacioal é %3.f\n",densidade2);
printf("O pib per capita é:%3.f\n",percapita2);
printf("Super poder:%2.f\n",superpoder2);
printf("\n");
printf("\n");
printf("\n");
break;
case 3:
printf("comparação:\n");
printf("população:\n");
if(populacao1>populacao2){
    printf("Resultado: A carta 1 venceu!\n");
    printf("população:%2.f \n",populacao1);
}else{
    printf("Resultad: A carta 2 venceu!\n");
    printf("população:%2.f \n",populacao2);
}
printf("Área:\n");
if(area1>area2){
    printf("Resultado: A carta 1 venceu! \n");
    printf("Área:%2.f \n",area1);
}else{
    printf("Resultad: A carta 2 venceu!\n");
    printf("Área:%2.f \n",area2);
}
printf("PIB:\n");
if(pib1>pib2){
    printf("Resultado: A carta 1 venceu! \n");
    printf("PIB:%2.f \n",pib1);
}else{
    printf("Resultad: A carta 2 venceu!\n");
    printf("PIB:%2.f \n",pib2);
}
printf("TURISMO:\n");
if(turismo1>turismo2){
    printf("Resultado: A carta 1 venceu! \n");
    printf("TURISMO:%d \n",turismo1);
}else{
    printf("Resultad: A carta 2 venceu!\n");
    printf("TURISMO:%d \n",turismo2);
}
printf("DENSIDADE POPULACIONAL:\n");
if(densidade1>densidade2){
    printf("Resultado: A carta 1 venceu! \n");
    printf("DENSIDADE:%2.f \n",densidade1);
}else{
    printf("Resultad: A carta 2 venceu!\n");
    printf("DENSIDADE:%2.f \n",densidade2);
}
printf("PIB PER CAPITA:\n");
if(percapita1>percapita2){
    printf("Resultado: A carta 1 venceu! \n");
    printf("PIB PER CAPITA:%2.f \n",percapita1);
}else{
    printf("Resultad: A carta 2 venceu!\n");
    printf("PIB PER CAPITA:%2.f \n",percapita2);
}
printf("super poder:\n");
if(superpoder1>superpoder2){
    printf("Resultado: A carta 1 venceu! \n");
    printf("SUPER PODER:%2.f \n",superpoder1);
}else{
    printf("Resultad: A carta 2 venceu!\n");
    printf("SUPER PODER:%2.f \n",superpoder2);
}

}
}while (opcao !=4);

    printf("vc saiu do jogo\n");



return 0;
}