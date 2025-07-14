   #include <stdio.h>

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

    // Exibir As Informações Das Cartas
    
    printf("\n\n Informações_Da_Carta 1: \n\n");

    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Cidade: %s\n", NomedaCidade1);
    printf("População: %.3f Milhões\n", Populacao1);
    printf("Área: %.3lfkm\n", Area1);
    printf("PIB: %.3lf Bilhões\n", PIB1);
    printf("Pontos Turísticos: %d Lugares\n", NumerodePontosTuristicos1);


    printf("\n\n Informações_Da_Carta 2: \n\n");

    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", NomedaCidade2);
    printf("População: %.3lf Milhões\n", Populacao2);
    printf("Área: %.3lfkm²\n", Area2);
    printf("PIB: %.3lf Bilhões\n", PIB2);
    printf("Pontos Turísticos: %d Lugares\n", NumerodePontosTuristicos2);





    

    
    return 0;
 }
