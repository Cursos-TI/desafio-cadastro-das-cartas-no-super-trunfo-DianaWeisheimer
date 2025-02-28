#include <stdio.h>

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

    return 0;
}
