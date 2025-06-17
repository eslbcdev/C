#include <stdio.h> // Biblioteca padrão para entrada e saída;

int main(){ // Função principal do programa;


    // Declaração das Variáveis da Carta 1:
    char estado1[10]; // Estado da carta (máximo de 9 caracteres + '\0');
    char codigo_carta1[50]; // Código da carta (máximo de 49 caracteres + '\0');
    char pais1[50]; // Nome do País;
    int populacao1; // População do País;
    float area1; //Área do País;
    int expectativa1; // Expectativa de Vida do País;

    // Declaração de Variáveis da Carta 2 (mesmos campos da carta 1):
    char estado2[10];
    char codigo_carta2[50];
    char pais2[50];
    int populacao2;
    float area2;
    int expectativa2;


    // Entrada de Dados da Carta 1: 
    printf("Carta 1\n");

    printf("Insira o estado: \n");
    scanf("%s", &estado1); // Lê o nome do Estado;

    printf("Insira o código: \n"); 
    scanf("%s", &codigo_carta1); // Lê o Código da Carta;

    printf("Insira o país: \n"); 
    scanf("%s", &pais1); //Lê o nome do País;

    printf("Insira a população: \n"); 
    scanf("%d", &populacao1); // Lê a Densidade Populacional do País;

    printf("Insira a área: \n"); 
    scanf("%f", &area1); // Lê a Área do País;

    printf("Insira a expectativa de vida: \n"); 
    scanf("%d", &expectativa1); //Lê a Expectativa de Vida do País;

    // Entrada de Dados da Carta 2:
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

    printf("Insira a expectativa de vida: \n");
    scanf("%d", &expectativa2);

    // Exibição dos dados da Carta 1:
    printf("Carta 1\n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo_carta1);
    printf("País: %s \n", pais1);
    printf("População: %d \n", populacao1);
    printf("Área: %f \n", area1);
    printf("Expectativa de Vida: %d\n", expectativa1);

    // Exibição dos dados da Carta 2:
    printf("Carta 2\n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo_carta2);
    printf("País: %s \n", pais2);
    printf("População: %d \n", populacao2);
    printf("Área: %f \n", area2);
    printf("Expectativa de Vida: %d\n", expectativa2);

    return 0;  // Fim da função principal;   






}
