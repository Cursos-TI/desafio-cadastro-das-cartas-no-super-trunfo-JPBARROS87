#include <stdio.h>


int main() {

    //Variaveis:

    int populacao, pontos_turisticos;
    float pib, area, idh;
    char codigo [3];
    char nome [20];

    //Solicitando os dados:

    printf("Insira o nome da cidade:\n");
    scanf("%s",&nome);
    printf("Insira o código da cidade, no formato número + letra: (exemplo: 1A)\n");
    scanf("%s",&codigo);
    printf("Insira o PIB da cidade:\n");
    scanf("%f", &pib);
    printf("Insira o IDH da cidade:\n");
    scanf("%f",&idh);
    printf("Insira a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &pontos_turisticos);
    printf("Insira a área da cidade:\n");
    scanf("%f",&area);
    printf("Insira a população da cidade:\n");
    scanf("%d",&populacao);

    // Exibição dos dados informados:

    printf("%s_______%s\n",codigo, nome);
    printf("PIB: R$ %.2f\n",pib);
    printf("IDH: %.3f\n",idh);
    printf("População: %d\n", populacao);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Área: %.3f km²\n",area);

    return 0;
}
