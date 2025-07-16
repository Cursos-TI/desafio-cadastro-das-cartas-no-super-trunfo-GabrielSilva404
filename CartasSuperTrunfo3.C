#include <stdio.h>
#include <stdlib.h>

        // Desafio: Super Trunfo De Paises!
        // Dividir Para Conquistar!

        int main() {

        // Declarando as Variaveis

          char Estado1[20], Estado2[20];
          char Codigo1[20], Codigo2[20];
          char NomedaCidade1[20], NomedaCidade2[20];

          unsigned int Populacao1, Populacao2;
          float Area1, Area2;
          float PIB1, PIB2;
          unsigned int NumerodePontosTuristicos1, NumerodePontosTuristicos2;

          float DensidadePopulacional1, DensidadePopulacional2;
          float PIBperCapita1, PIBperCapita2;

          float SuperPoder1, SuperPoder2;
          unsigned int ResultadoCarta1, ResultadoCarta2;

//Calcular a Densidade Populacional e o PIB per Capita: Assim como no nível intermediário, calcule e armazene esses valores.

    // Exibir As Perguntas da Carta 1

    printf("**Desafio Super Trunfo!**\n  ");
      printf("    (Carta 1)\n\n");

    printf("Digite o Estado: ");
    scanf("%s", &Estado1);

    printf("Digite o Código: ");
    scanf("%s", &Codigo1);
   
    printf("Digite o Nome_Da_Cidade: ");
    scanf("%s", &NomedaCidade1);

    printf("Didite a População: ");
    scanf("%d", &Populacao1);

    printf("Digite a Área: ");
    scanf("%f", &Area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%u", &NumerodePontosTuristicos1);

    system("clear");

    // Exibir As Perguntas Da Carta 2

    printf("***Desafio Super Trunfo!***\n  ");
      printf("    (Carta 2)\n\n");

    printf("Digite o Estado: ");
    scanf("%s", &Estado2);

    printf("Digite o Código: ");
    scanf("%s", &Codigo2);

    printf("Digite o Nome_Da_Cidade: ");
    scanf("%s", &NomedaCidade2);

    printf("Didite a População: ");
    scanf("%d", &Populacao2);

    printf("Digite a Área: ");
    scanf("%f", &Area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%u", &NumerodePontosTuristicos2); 

    system("clear");

// Conversão dos Resultados Digitados:

    DensidadePopulacional1 = Populacao1 / Area1 * 1000;
    DensidadePopulacional2 = Populacao2 / Area2 * 1000;

    PIBperCapita1 = PIB1 / Populacao1 * 1000;
    PIBperCapita2 = PIB2 / Populacao2 * 1000;

/*Calcular o Super Poder:Para cada carta, calcule o "Super Poder"
somando todos os atributos numéricos população, área, PIB, 
número de pontos turísticos, PIB per capita e o inverso da densidade 
populacional – quanto menor a densidade, maior o poder:*/

SuperPoder1 = Populacao1 + Area1 + PIB1 + NumerodePontosTuristicos1 + 
   PIBperCapita1 + (DensidadePopulacional1 / 1);
   
SuperPoder2 = Populacao2 + Area2 + PIB2 + NumerodePontosTuristicos2 + 
   PIBperCapita2 + (DensidadePopulacional2 / 1);

// Comparar as Cartas 1 e 2:

ResultadoCarta1 = Populacao1 > Populacao2;
ResultadoCarta1 = Area1 > Area2;
ResultadoCarta1 = PIB1 > PIB2;
ResultadoCarta1 = NumerodePontosTuristicos1 > NumerodePontosTuristicos2;
ResultadoCarta1 = DensidadePopulacional1 > DensidadePopulacional2;
ResultadoCarta1 = PIBperCapita1 > PIBperCapita2;
ResultadoCarta1 = SuperPoder1 > SuperPoder2;

ResultadoCarta2 = Populacao2 > Populacao1;
ResultadoCarta2 = Area2 > Area1;
ResultadoCarta2 = PIB2 > PIB1;
ResultadoCarta2 = NumerodePontosTuristicos2 > NumerodePontosTuristicos1;
ResultadoCarta2 = DensidadePopulacional2 > DensidadePopulacional1;
ResultadoCarta2 = PIBperCapita2 > PIBperCapita1;
ResultadoCarta2 = SuperPoder2 > SuperPoder1;

    //** Exibir As Informações Da Carta 1 */
    // Exibir Os Resultados Das Comparações:
    
    printf("\n\n Informações_Da_Carta 1: \n\n");

    printf("Estado: %s - %u\n", Estado1, ResultadoCarta1);
    printf("Código: %s - %u\n", Codigo1, ResultadoCarta1);
    printf("Cidade: %s- %u\n", NomedaCidade1, ResultadoCarta1);
    printf("População: %.3d Mi- %u\n", Populacao1, ResultadoCarta1);
    printf("Área: %.2fkm²- %u\n", Area1, ResultadoCarta1);
    printf("PIB: %.3f Bi - %u\n", PIB1, ResultadoCarta1);
    printf("Pontos Turísticos: %u Lugares - %u\n", NumerodePontosTuristicos1, ResultadoCarta1);

    // exibir a Densidade Populacional e PIB Capita da Carta 1:

    printf("Densidade Populacional: %.2f Hab/km²- %u\n", DensidadePopulacional1, ResultadoCarta1);
    printf("PIB per Capita: %.2f R$ - %u\n", PIBperCapita1, ResultadoCarta1);

    // Exibir o Super_Poder:

    printf("Super Poder: %.2f - %u\n\n", SuperPoder1, ResultadoCarta1);

      /** Exibir Informações Da Carta 2 */
    // Exibir Os Resultados Das Comparações:

    printf("\n\n Informações_Da_Carta 2: \n\n");

    printf("Estado: %s- %u\n", Estado2, ResultadoCarta2);
    printf("Código: %s- %u\n", Codigo2, ResultadoCarta2);
    printf("Cidade: %s- %u\n", NomedaCidade2, ResultadoCarta2);
    printf("População: %.3d Mi- %u\n", Populacao2, ResultadoCarta2);
    printf("Área: %.2fkm²- %u\n", Area2, ResultadoCarta2);
    printf("PIB: %.3f Bi- %u\n", PIB2, ResultadoCarta2);
    printf("Pontos Turísticos: %u Lugares- %u\n", NumerodePontosTuristicos2, ResultadoCarta2);

    // exibir a Densidade Populacional e PIB Capita da Carta 2:

    printf("Densidade Populacional: %.2f Hab/- %u\n", DensidadePopulacional2, ResultadoCarta2);
    printf("PIB per Capita: %.2f R$ - %u\n", PIBperCapita2, ResultadoCarta2);

    // Exibir o Super_Poder

    printf("Super Poder: %.2f - %u\n\n", SuperPoder2, ResultadoCarta2);






    

    
    return 0;
 }