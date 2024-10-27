#include <stdio.h>

int main() {

    /* declaração das variáveis a serem utilizadas */

    char estado;
    char cod_cidade[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    /* prompt de entrada dos dados da carta, com indicador do que é para entrar e scanf ou fgets para capturar as informações e armazenar em variáveis */

    printf("Cadastro de Cartas SuperTrunfo\n\n");

    printf("Digite a letra que representa o estado: ");
    scanf(" %c", &estado); // espaço acrescentado antes do %c como ensinado em aula para evitar problemas com quebras de linha

    printf("Digite o código da cidade: ");
    scanf("%s", cod_cidade);

    getchar(); // limpa a quebra de linha do scanf anterior

    printf("Digite o nome da cidade: ");
    fgets(cidade, 50, stdin); // captura a variável com espaços, o que scanf não faz

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    /* saída dos dados da carta, mostrando mensagem de cadastro com sucesso e as informações inseridas pelo usuário */

    printf("\n\nCarta cadastrada com sucesso. Informações da nova carta abaixo.\n");

    printf("\nEstado: %c", estado);

    printf("\nCódigo da cidade: %s", cod_cidade);

    printf("\nNome da cidade: %s", cidade);

    printf("População: %d", populacao);

    printf("\nÁrea: %.2f km²", area);

    printf("\nPIB: %.2f bilhões de reais", pib);

    return 0;
}
