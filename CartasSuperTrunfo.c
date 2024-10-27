#include <stdio.h>

int main() {

    char letra_do_estado;
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    printf("Cadastro de Cartas SuperTrunfo\n");
    
    printf("Digite a letra que representa o estado: ");
    scanf("%c", &letra_do_estado);

    printf("Digite o código da cidade: ");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    
    printf("Digite a área da cidade: ");
    scanf("%f", &area);
    
    printf("Digite o pib da cidade: ");
    scanf("%f", &pib);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
