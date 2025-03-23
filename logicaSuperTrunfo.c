#include <stdio.h>

int main() {
   //variáveis da carta 1
   char estado_carta1;
   char nome_da_cidade_carta1[50];
   unsigned long int populacao_carta1; 
   int numero_de_pontos_turisticos_carta1;
   float area_carta1,
   pib_carta1,
   densidade_populacional_carta1,
   pib_per_capita_carta1,
   super_poder_carta1;

   //variaveis da carta 2
   char estado_carta2;
   char nome_da_cidade_carta2[50];
   unsigned long int populacao_carta2; 
   int numero_de_pontos_turisticos_carta2;
   float area_carta2,
   pib_carta2,
   densidade_populacional_carta2,
   pib_per_capita_carta2,
   super_poder_carta2;

   //variável da opção escolhida pelo usuário no Menu
    int opcao_menu;

   //Entrada do dados digitados pelo usuário no terminal

   printf("Digite uma letra entre A e H para o seu Estado na Carta 1: \n");
   scanf("%c", &estado_carta1);

   printf("Digite o nome da sua cidade na Carta 1: \n");
   scanf("%s", &nome_da_cidade_carta1);

   printf("Digite a população da Carta 1: \n");
   scanf("%d", &populacao_carta1);
   
   printf("Digite a área da Carta 1: \n");
   scanf("%f", &area_carta1);

   printf("Digite o PIB da Carta 1: \n");
   scanf("%f", &pib_carta1);

   printf("Digite o número de pontos turísticos da Carta 1: \n");
   scanf("%d", &numero_de_pontos_turisticos_carta1);

   printf("Digite uma letra entre A e H para o seu Estado na Carta 2: \n");
   scanf("%s", &estado_carta2);

   printf("Digite o nome da sua cidade na Carta 2: \n");
   scanf("%s", &nome_da_cidade_carta2);

   printf("Digite a população da Carta 2: \n");
   scanf("%d", &populacao_carta2);
   
   printf("Digite a área da Carta 2: \n");
   scanf("%f", &area_carta2);

   printf("Digite o PIB da Carta 2: \n");
   scanf("%f", &pib_carta2);

   printf("Digite o número de pontos turísticos da Carta 2: \n");
   scanf("%d", &numero_de_pontos_turisticos_carta2);

   printf("\n");

   //cálculos da Carta 1
   densidade_populacional_carta1 = populacao_carta1 / area_carta1; //cálculo da densidade populacional da carta 1
   pib_per_capita_carta1 = pib_carta1 / populacao_carta1; //cálculo do PIB per Capita da carta 1
   super_poder_carta1 = (float) (populacao_carta1 + area_carta1 + pib_carta1 + numero_de_pontos_turisticos_carta1 + densidade_populacional_carta1 + pib_per_capita_carta1); // cálculo do super poder somando todos os atributos númericos da carta 1

   //Saída dos dados da Carta 1
   printf("Carta 1 \n");
   printf("Estado: %c \n", estado_carta1);
   printf("Código: %c01 \n", estado_carta1);
   printf("Nome da Cidade: %s \n", nome_da_cidade_carta1);
   printf("População: %ld \n", populacao_carta1);
   printf("Área: %f km²\n", area_carta1);
   printf("PIB: %f \n", pib_carta1);
   printf("Número de pontos turísticos: %d \n", numero_de_pontos_turisticos_carta1);
   printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional_carta1); 
   printf("PIB per Capita: %.2f reais \n", pib_per_capita_carta1);
   printf("Super Poder: %f \n", super_poder_carta1);
   printf("\n");

   //cálculos da Carta 2
   densidade_populacional_carta2 = populacao_carta2 / area_carta2; //cálculo da densidade populacional da carta 2
   pib_per_capita_carta2 = pib_carta2 / populacao_carta2; //cálculo do PIB per Capita da carta 2
   super_poder_carta2 = (float) (populacao_carta2 + area_carta2 + pib_carta2 + numero_de_pontos_turisticos_carta2 + densidade_populacional_carta2 + pib_per_capita_carta2); // cálculo do super poder somando todos os atributos númericos da carta 2

   //Saída dos dados da Carta 2
   printf("Carta 2 \n");
   printf("Estado: %c \n", estado_carta2);
   printf("Código: %c02 \n", estado_carta2);
   printf("Nome da Cidade: %s \n", nome_da_cidade_carta2);
   printf("População: %ld \n", populacao_carta2);
   printf("Área: %f km² \n", area_carta2);
   printf("PIB: %f \n", pib_carta2);
   printf("Número de pontos turísticos: %d \n", numero_de_pontos_turisticos_carta2);
   printf("Densidade Populacional: %.2f km² \n", densidade_populacional_carta2);
   printf("PIB per Capita: %.2f reais \n", pib_per_capita_carta2);
   printf("Super Poder: %f \n", super_poder_carta2);
   printf("\n");

   //Saída do Menu Principal
   printf("Menu Principal \n");
   printf("1 - Comparar a População \n");
   printf("2 - Comparar a Área \n");
   printf("3 - Comparar o PIB \n");
   printf("4 - Comparar os Pontos Turísticos \n");
   printf("5 - Comparar a Densidade Populacional \n");
   printf("6 - Comparar o PIB per Capita \n");
   printf("7 - Comparar o Super Poder \n");
   printf("Escolha uma das opções: \n");
   scanf("%d", &opcao_menu);
   printf("\n");

   switch (opcao_menu)
   {
   case 1:
       //Comparação entre os atributos população
       printf("Comparação de cartas (Atributo: População): \n");
       printf("Carta 1 - %s : %ld \n", nome_da_cidade_carta1, populacao_carta1);
       printf("Carta 2 - %s : %ld \n", nome_da_cidade_carta2, populacao_carta2);

       if(populacao_carta1 > populacao_carta2){
           printf("Resultado: Carta 1 %s  venceu ! \n", nome_da_cidade_carta1);
       }else if(populacao_carta1 < populacao_carta2){
           printf("Resultado: Carta 2 %s venceu ! \n", nome_da_cidade_carta2);
       }else{
           printf("Resultado: Empate! \n");
       }
       break;
   case 2:
       //Comparação entre os atributos Área
       printf("Comparação de cartas (Atributo: Área): \n");
       printf("Carta 1 - %s : %f \n", nome_da_cidade_carta1, area_carta1);
       printf("Carta 2 - %s : %f \n", nome_da_cidade_carta2, area_carta2);

       if(area_carta1 > area_carta2){
           printf("Resultado: Carta 1 %s  venceu ! \n", nome_da_cidade_carta1);
       }else if (area_carta1 < area_carta2){
           printf("Resultado: Carta 2 %s venceu ! \n", nome_da_cidade_carta2);
       }else{
           printf("Resultado: Empate! \n");
       }
       break;
   case 3:
       //Comparação entre os atributos PIB
       printf("Comparação de cartas (Atributo: PIB): \n");
       printf("Carta 1 - %s : %f \n", nome_da_cidade_carta1, pib_carta1);
       printf("Carta 2 - %s : %f \n", nome_da_cidade_carta2, pib_carta2);

       if(pib_carta1 > pib_carta2){
           printf("Resultado: Carta 1 %s  venceu ! \n", nome_da_cidade_carta1);
       }else if (pib_carta1 < pib_carta2){
           printf("Resultado: Carta 2 %s venceu ! \n", nome_da_cidade_carta2);
       }else{
           printf("Resultado: Empate! \n");
       }
       break;
   case 4:
       //Comparação entre os Pontos Turísticos
       printf("Comparação de cartas (Atributo: Pontos Turísticos): \n");
       printf("Carta 1 - %s : %d \n", nome_da_cidade_carta1, numero_de_pontos_turisticos_carta1);
       printf("Carta 2 - %s : %d \n", nome_da_cidade_carta2, numero_de_pontos_turisticos_carta2);

       if(numero_de_pontos_turisticos_carta1 > numero_de_pontos_turisticos_carta2){
           printf("Resultado: Carta 1 %s  venceu ! \n", nome_da_cidade_carta1);
       }else if (numero_de_pontos_turisticos_carta1 < numero_de_pontos_turisticos_carta2){
           printf("Resultado: Carta 2 %s venceu ! \n", nome_da_cidade_carta2);
       }else{
           printf("Resultado: Empate! \n");
       }
       break; 
   case 5:
       //Comparação entre as Densidades Populacionais
       printf("Comparação de cartas (Atributo: Densidade Populacional): \n");
       printf("Carta 1 - %s : %d \n", nome_da_cidade_carta1, densidade_populacional_carta1);
       printf("Carta 2 - %s : %d \n", nome_da_cidade_carta2, densidade_populacional_carta2);

       if(densidade_populacional_carta1 < densidade_populacional_carta2){
           printf("Resultado: Carta 1 %s  venceu ! \n", nome_da_cidade_carta1);
       }else if (densidade_populacional_carta1 > densidade_populacional_carta2){
           printf("Resultado: Carta 2 %s venceu ! \n", nome_da_cidade_carta2);
       }else{
           printf("Resultado: Empate! \n");
       }
       break; 
   case 6:
       //Comparação entre o atributo PIB per Capita
       printf("Comparação de cartas (Atributo: PIB per Capita): \n");
       printf("Carta 1 - %s : %d \n", nome_da_cidade_carta1, pib_per_capita_carta1);
       printf("Carta 2 - %s : %d \n", nome_da_cidade_carta2, pib_per_capita_carta2);

       if(pib_per_capita_carta1 > pib_per_capita_carta2){
           printf("Resultado: Carta 1 %s  venceu ! \n", nome_da_cidade_carta1);
       }else if (pib_per_capita_carta1 < pib_per_capita_carta2){
           printf("Resultado: Carta 2 %s venceu ! \n", nome_da_cidade_carta2);
       }else{
           printf("Resultado: Empate! \n");
       }
       break;
   case 7: 
       //Comparação entre o atributo Super Poder
       printf("Comparação de cartas (Atributo: Super Poder): \n");
       printf("Carta 1 - %s : %d \n", nome_da_cidade_carta1, super_poder_carta1);
       printf("Carta 2 - %s : %d \n", nome_da_cidade_carta2, super_poder_carta2);

       if(super_poder_carta1 > super_poder_carta2){
           printf("Resultado: Carta 1 %s  venceu ! \n", nome_da_cidade_carta1);
       }else if (super_poder_carta1 < super_poder_carta2){
           printf("Resultado: Carta 2 %s venceu ! \n", nome_da_cidade_carta2);
       }else{
           printf("Resultado: Empate! \n");
       }
       break;          
   default:
       printf("Opção %d Inválida \n", opcao_menu);
       break;
   }

   printf("\n");



    return 0;
}
