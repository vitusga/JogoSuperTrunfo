// Version 1.002
// importando bibliotecas fundamentais para o funcionamento do código
#include <stdio.h> 
#include <stdlib.h> // alocação de memória dinâmica malloc, free, exit, etc
#include <string.h> // para manipulaçao de strings strlen, strcpy, strcmp, etc
#include <stdbool.h>


int main(){
    // Variáveis para armazenar os atributos da cidade
    float population, pib, area, population_density, pib_per_capita, superpower; 
    int cardcode, turisticpoints;
    char name[60], state;
    char option;

    printf("SEJA BEM VINDO!\n");
    printf("Desafio de cartas Super Trunfo!\n");
do {
    // Solicitando ao usuário que insira as informações da cidade
    printf("Digite o nome de uma cidade para cadastra-la no jogo:\n");
    // Solicita o nome da cidade com o tamanho total de 60 caracteres que podem ser adicionados na variável name
    fgets(name, sizeof(name), stdin);

    // Solicitando ao usuário que insira uma letra para designar ao código da carta
    printf("Escolha uma letra entre A-H para representar o estado \n");
    scanf(" %c", &state);
    getchar(); // Limpa o buffer do teclado
    
    printf("Digite o numero da cidade (1-4): \n ");
    scanf(" %d", &cardcode); // pega o valor de cardcode
    cardcode = 0; // Inicializa o cardcode em 0 para evitar valores "lixo" e problemas de código
    do {
        printf("Numero invalido! Digite um numero entre 1 e 4: \n ");
        scanf(" %d", &cardcode); 
    } while (cardcode < 1 || cardcode > 4);

    printf("Quantos pontos turisticos essa cidade possui? \n ");
    scanf(" %d", &turisticpoints);

    printf("O numero de habitantes: \n ");
    scanf(" %f", &population);

    printf("Para finalizar, cadastraremos a area em km quadrados: \n ");
    scanf(" %f", &area);

    printf("Desta vez preciraremos cadastrar o pib.\n ");
    scanf(" %f", &pib);

    

    // Calculo da densidade populacional
    population_density = population / area;
    pib_per_capita = pib / population;

    // SUPER PODER = soma de todas as propriedades
    superpower = population + pib + area + population_density + pib_per_capita + turisticpoints;


    printf("Resumo da carta cadastrada! \n");
    printf("Codigo da Carta: %c%02d \n", state, cardcode);
    printf("Nome da cidade: %s \n", name);
    printf("Numero de pontos turisticos: %d \n", turisticpoints);
    printf("Populacao: %.2f \n", population);
    printf("Area em km quadrados: %.1f \n", area);
    printf("PIB: %.2f \n", pib);
    printf("Densidade Populacional: %.2f \n", population_density);
    printf("PIB per capita: %.2f \n", pib_per_capita);
    
    printf("Deseja salvar a carta em Super Trunfo Cidades \n " "e voltar ao menu principal? (s/n) "); 
    scanf(" %c", &option);
    getchar();    
    switch(option) { // aplicando o loop switch para as opções de salvar ou descartar a carta
        case 's':
        case 'S':
            printf("Carta salva com sucesso! \n");
            break;
        case 'n':
        case 'N':
            printf("Carta descartada! \n");
            break;
        default:
            printf("Opção inválida! Fechando programa! =] \n");
            return 0;
    }
    
} while(option == 's' || option == 'S');  // Repete o processo se a opção for 's' ou 'S'

return 0;

}
