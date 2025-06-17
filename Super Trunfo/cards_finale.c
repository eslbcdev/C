#include <stdio.h> // Biblioteca padrão de entrada e saída (para usar printf e scanf)

int main(){ // Função principal do programa


    // Declaração das variáveis da carta 1
    char estado1[10]; // Nome do estado (máximo 9 caracteres + '\0')
    char codigo_carta1[50]; // Código da carta (máximo 49 caracteres + '\0')
    char pais1[50]; // Nome do país
    int populacao1; // População do estado
    float area1; // Área em km²
    double pib1; // PIB
    float pib_per_capita1;
    float densidade1;
    float super_poder1; // Variável para armazenar o valor do super poder
    float inverso_densidade1; // Variável para armazenar o inverso da densidade populacional
    


    // Declaração das variáveis da carta 2 (mesmas informações da carta 1)
    char estado2[10];
    char codigo_carta2[50];
    char pais2[50];
    int populacao2;
    float area2;
    double pib2;
    float pib_per_capita2;
    float densidade2;
    float super_poder2; // Variável para armazenar o valor do super poder
    float inverso_densidade2; // Variável para armazenar o inverso da densidade populacional

    


    // Entrada de dados da carta 1
    printf("Carta 1\n");

    printf("Insira o estado: \n");
    scanf("%s", &estado1); // Lê o nome do estado

    printf("Insira o código: \n");
    scanf("%s", &codigo_carta1);  // Lê o código da carta

    printf("Insira o país: \n");
    scanf("%s", &pais1); // Lê o nome do país

    printf("Insira a população: \n");
    scanf("%d", &populacao1); // Lê a população

    printf("Insira a área: \n");
    scanf("%f", &area1); // Lê a área

    printf("Insira o PIB: \n");
    scanf("%lf", &pib1); // Lê o PIB

    pib_per_capita1 = (float)(pib1 / populacao1);
    densidade1 = (float)(populacao1 / area1);

    

    // Entrada de dados da carta 2
    printf("Carta 2\n");

    printf("Insira o estado: \n");
    scanf("%s", &estado2);

    printf("Insira o código: \n");
    scanf("%s", &codigo_carta2);

    printf("Insira o país: \n");
    scanf("%s", &pais2);

    printf("Insira a população: \n");
    scanf("%d", &populacao2);

    printf("Insira a área: \n");
    scanf("%f", &area2);

    printf("Insira o PIB: \n");
    scanf("%lf", &pib2);


    // Cálculo do PIB per capita, densidade populacional; 
    pib_per_capita2 = (float)(pib2 / populacao2);
    densidade2 = (float)(populacao2 / area2);
    


    // Exibição dos dados da carta 1
    printf("Carta 1\n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo_carta1);
    printf("País: %s \n", pais1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2lf trilhões de dólares\n", pib1 / 1e12);
    printf("PIB per capita: %.2f dólares\n", pib_per_capita1);
    printf("Densidade Populacional: %.2f\n", densidade1);

    // Exibição dos dados da carta 2
    printf("Carta 2\n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo_carta2);
    printf("País: %s \n", pais2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2lf bilhões de doláres\n", pib2 / 1e9);
    printf("PIB per Capita: %.2f dólares\n", pib_per_capita2);
    printf("Densidade Populacional: %.2f\n", densidade2);

    //Cálculo do Inverso da Densidade Populacional:
    inverso_densidade1 = (float) 1.0 / densidade1;
    inverso_densidade2 = (float)1.0 / densidade2;

    
    //Cálculo do Super Poder
    super_poder1 = (float) populacao1 + area1 + pib1 + pib_per_capita1 + inverso_densidade1;
    super_poder2 = (float) populacao2 + area2 + pib2 + pib_per_capita2 + inverso_densidade2;

    //Exibição Super Poder:

    printf("Super Poder Carta 1: %.2f\n", super_poder1);
    printf("Super Poder Carta 2: %.2f\n", super_poder2);


    //Resultado da Comparação das Cartas:
    printf("*****COMPARAÇÃO DAS CARTAS*****\n");
    printf("POPULAÇÃO: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2) ? 2 : 1);
    printf("ÁREA: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2) ? 2 : 1);
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2) ? 2 : 1);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_per_capita1 > pib_per_capita2) ? 1 : 2, (pib_per_capita1 > pib_per_capita2) ? 2 : 1);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 > densidade2) ? 1 : 2, (densidade1 > densidade2) ? 2 : 1);
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder1 > super_poder2) ? 1 : 2, (super_poder1 > super_poder2) ? 2 : 1);


    return 0;    // Fim da função principal  






}
