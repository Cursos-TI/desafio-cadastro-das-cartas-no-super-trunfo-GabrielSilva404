   #include <stdio.h>

        // Desafio: Super Trunfo De Paises!
        // Dividir Para Conquistar!

        int main() {

                char Estado1[20], Estado2[20];
                char Código1[20], Código2[20];
                char Nome_da_Cidade1[20], Nome_da_Cidade2[20];
                double População1, População2;
                double Área1, Área2;
                double PIB1, PIB2;
                int Número_de_Pontos_Turísticos1, Número_de_Pontos_Turísticos2;

    // Exibir As Perguntas da Carta 1

    printf("\nDesafio Super Trunfo!\n  ");
      printf("    (Carta 1)\n\n");

    printf("Digite o Estado: ");
    scanf("%s", &Estado1);

    printf("Digite o Código: ");
    scanf("%s", &Código1);
   
    printf("Digite o Nome_Da_Cidade: ");
    scanf("%s", &Nome_da_Cidade1);

    printf("Didite a População: ");
    scanf("%lf", &População1);

    printf("Digite a Área: ");
    scanf("%lf", &Área1);

    printf("Digite o PIB: ");
    scanf("%lf", &PIB1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &Número_de_Pontos_Turísticos1);

    system("clear");

    // Exibir As Perguntas Da Carta 2

    printf("\nDesafio Super Trunfo!\n  ");
      printf("    (Carta 2)\n\n");

    printf("Digite o Estado: ");
    scanf("%s", &Estado2);

    printf("Digite o Código: ");
    scanf("%s", &Código2);

    printf("Digite o Nome_Da_Cidade: ");
    scanf("%s", &Nome_da_Cidade2);

    printf("Didite a População: ");
    scanf("%lf", &População2);

    printf("Digite a Área: ");
    scanf("%lf", &Área2);

    printf("Digite o PIB: ");
    scanf("%lf", &PIB2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &Número_de_Pontos_Turísticos2); 

    system("clear");

    // Exibir As Informações Das Cartas
    
    printf("\n\n Informações_Da_Carta 1: \n\n");

    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", Código1);
    printf("Cidade: %s\n", Nome_da_Cidade1);
    printf("População: %.3f Milhões\n", População1);
    printf("Área: %.3lfkm\n", Área1);
    printf("PIB: %.3lf Bilhões\n", PIB1);
    printf("Pontos Turísticos: %d Lugares\n", Número_de_Pontos_Turísticos1);


    printf("\n\n Informações_Da_Carta 2: \n\n");

    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Código2);
    printf("Cidade: %s\n", Nome_da_Cidade2);
    printf("População: %.3lf Milhões\n", População2);
    printf("Área: %.3lfkm\n", Área2);
    printf("PIB: %.3lf Bilhões\n", PIB2);
    printf("Pontos Turísticos: %d Lugares\n", Número_de_Pontos_Turísticos2);




    return 0;
 }
