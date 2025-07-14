#include <stdio.h>
#include <stdlib.h>

        // Desafio: Super Trunfo De Paises!
        // Dividir Para Conquistar!

        int main() {

          char Estado1[20], Estado2[20];
          char Codigo1[20], Codigo2[20];
          char NomedaCidade1[20], NomedaCidade2[20];
            double Populacao1, Populacao2;
            double Area1, Area2;
            double PIB1, PIB2;
          int NumerodePontosTuristicos1, NumerodePontosTuristicos2;
          float DensidadePopulacional1, DensidadePopulacional2;
          float PIBperCapita1, PIBperCapita2;
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
    scanf("%lf", &Populacao1);

    printf("Digite a Área: ");
    scanf("%lf", &Area1);

    printf("Digite o PIB: ");
    scanf("%lf", &PIB1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &NumerodePontosTuristicos1);

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
    scanf("%lf", &Populacao2);

    printf("Digite a Área: ");
    scanf("%lf", &Area2);

    printf("Digite o PIB: ");
    scanf("%lf", &PIB2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &NumerodePontosTuristicos2); 

    system("clear");

// Conversão dos resultados digitados.

   // Area1, Area2 *= 100;
     
   // Populacao1, populacao2 *= 100;

   // PIB1, PIB2 *= 100;

    DensidadePopulacional1 = Populacao1 / Area1 * 1000;
    DensidadePopulacional2 = Populacao2 / Area2 * 1000;

    PIBperCapita1 = PIB1 / Populacao1 * 1000;
    PIBperCapita2 = PIB2 / Populacao2 * 1000;


    // Exibir As Informações Das Cartas
    
    printf("\n\n Informações_Da_Carta 1: \n\n");

    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Cidade: %s\n", NomedaCidade1);
    printf("População: %.3f Mi\n", Populacao1);
    printf("Área: %.2lfkm²\n", Area1);
    printf("PIB: %.3lf Bi\n", PIB1);
    printf("Pontos Turísticos: %d Lugares\n", NumerodePontosTuristicos1);

    printf("Densidade Populacional: %.2f Hab/km²\n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f R$\n\n", PIBperCapita1);

    printf("\n\n Informações_Da_Carta 2: \n\n");

    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", NomedaCidade2);
    printf("População: %.3lf Mi\n", Populacao2);
    printf("Área: %.2lfkm²\n", Area2);
    printf("PIB: %.3lf Bi\n", PIB2);
    printf("Pontos Turísticos: %d Lugares\n", NumerodePontosTuristicos2);

    printf("Densidade Populacional: %.2f Hab/km²\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f R$\n", PIBperCapita2);





    

    
    return 0;
 }