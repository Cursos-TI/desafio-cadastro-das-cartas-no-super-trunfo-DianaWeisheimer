#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char state[50], code[50], cityName[50];
    int population, numberTouristPoints;
    float area, pib;

    printf("Enter the state: ");
    scanf("%s", state);
    printf("Enter the code: ");
    scanf("%s", code);
    printf("Enter the city name: ");
    scanf("%s", cityName);
    printf("Enter the population: ");
    scanf("%i", &population);
    printf("Enter the area: ");
    scanf("%f", &area);
    printf("Enter the pib: ");
    scanf("%f", &pib);
    printf("Enter the number of tourist points: ");
    scanf("%i", &numberTouristPoints);

    printf("CardStats:\n");
    printf("State: \n", state);
    printf("Code: \n", code);
    printf("City Name: \n", cityName);
    printf("Population: \n", population);
    printf("Area: \n", area);
    printf("PIB: \n", pib);
    printf("Tourist areas: \n", numberTouristPoints);
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    /*
    Estado (string)
 
    Código da carta (string)
 
    Nome da cidade (string)
 
    População (int)
 
    Área (float)
 
    PIB (float)
 
    Número de pontos turísticos (int)
    */
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
