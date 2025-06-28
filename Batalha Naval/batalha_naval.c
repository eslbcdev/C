include <stdio.h>

// Define as dimensões do tabuleiro
#define LINHAS 10
#define COLUNAS 10
// Define o tamanho fixo dos navios
#define TAMANHO_NAVIO 3
// Define os valores para água e navio no tabuleiro
#define AGUA 0
#define NAVIO 3

// --- Função principal do programa ---
int main() {
    // Declaração e inicialização do tabuleiro 10x10 com água (0s)
    // Uma matriz (array bidimensional) é usada para representar o tabuleiro.
    int tabuleiro[LINHAS][COLUNAS];
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = AGUA; // Inicializa todas as posições com água
        }
    }

    // --- Posicionamento do primeiro navio (horizontal) ---
    // Coordenadas iniciais para o navio horizontal.
    // Simplificado para este nível: as coordenadas são fixas no código.
    int navio1_linha_inicio = 1;
    int navio1_coluna_inicio = 2;

    // Variável para verificar se o posicionamento do navio 1 é válido
    int navio1_valido = 1;

    // Validação dos limites do tabuleiro para o navio 1 (horizontal)
    // O navio deve estar completamente dentro do tabuleiro.
    if (navio1_linha_inicio < 0 || navio1_linha_inicio >= LINHAS ||
        navio1_coluna_inicio < 0 || (navio1_coluna_inicio + TAMANHO_NAVIO) > COLUNAS) {
        printf("Erro: Coordenadas do Navio 1 (horizontal) fora dos limites do tabuleiro.\n");
        navio1_valido = 0; // Marca como inválido se fora dos limites
    }

    // Se as coordenadas são válidas, tenta posicionar o navio
    if (navio1_valido) {
        // Verifica sobreposição antes de posicionar (para este nível, verifica apenas com água)
        // Em um nível mais avançado, você verificaria se já existe outro navio (valor 3)
        for (int j = 0; j < TAMANHO_NAVIO; j++) {
            if (tabuleiro[navio1_linha_inicio][navio1_coluna_inicio + j] != AGUA) {
                printf("Erro: Navio 1 (horizontal) se sobrepõe a uma posição já ocupada.\n");
                navio1_valido = 0;
                break; // Sai do loop se encontrar sobreposição
            }
        }

        // Se não houver sobreposição e as coordenadas forem válidas, posiciona o navio
        if (navio1_valido) {
            for (int j = 0; j < TAMANHO_NAVIO; j++) {
                tabuleiro[navio1_linha_inicio][navio1_coluna_inicio + j] = NAVIO; // Posiciona as partes do navio
            }
        }
    }

    // --- Posicionamento do segundo navio (vertical) ---
    // Coordenadas iniciais para o navio vertical.
    // Simplificado para este nível: as coordenadas são fixas no código.
    int navio2_linha_inicio = 4;
    int navio2_coluna_inicio = 5;

    // Variável para verificar se o posicionamento do navio 2 é válido
    int navio2_valido = 1;

    // Validação dos limites do tabuleiro para o navio 2 (vertical)
    // O navio deve estar completamente dentro do tabuleiro.
    if (navio2_linha_inicio < 0 || (navio2_linha_inicio + TAMANHO_NAVIO) > LINHAS ||
        navio2_coluna_inicio < 0 || navio2_coluna_inicio >= COLUNAS) {
        printf("Erro: Coordenadas do Navio 2 (vertical) fora dos limites do tabuleiro.\n");
        navio2_valido = 0; // Marca como inválido se fora dos limites
    }

    // Se as coordenadas são válidas, tenta posicionar o navio
    if (navio2_valido) {
        // Verifica sobreposição antes de posicionar
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            if (tabuleiro[navio2_linha_inicio + i][navio2_coluna_inicio] != AGUA) {
                printf("Erro: Navio 2 (vertical) se sobrepõe a uma posição já ocupada.\n");
                navio2_valido = 0;
                break; // Sai do loop se encontrar sobreposição
            }
        }

        // Se não houver sobreposição e as coordenadas forem válidas, posiciona o navio
        if (navio2_valido) {
            for (int i = 0; i < TAMANHO_NAVIO; i++) {
                tabuleiro[navio2_linha_inicio + i][navio2_coluna_inicio] = NAVIO; // Posiciona as partes do navio
            }
        }
    }

    // --- Exibição do tabuleiro ---
    printf("\n--- Tabuleiro de Batalha Naval ---\n");
    printf("0 = Agua\n3 = Navio\n\n");

    // Imprime cabeçalho das colunas para melhor visualização
    printf("   "); // Espaço para a linha dos números
    for (int j = 0; j < COLUNAS; j++) {
        printf("%2d ", j); // Imprime o número da coluna
    }
    printf("\n");

    // Exibe o tabuleiro usando loops aninhados
    for (int i = 0; i < LINHAS; i++) {
        printf("%2d ", i); // Imprime o número da linha
        for (int j = 0; j < COLUNAS; j++) {
            printf("%2d ", tabuleiro[i][j]); // Imprime o valor da posição (0 ou 3)
        }
        printf("\n"); // Nova linha após cada linha do tabuleiro
    }

    return 0; // Indica que o programa foi executado com sucesso
}
