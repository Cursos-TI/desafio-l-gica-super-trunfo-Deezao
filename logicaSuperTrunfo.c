#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //variaveis que entrarao
    char estado[25], estado2[25];
    char nomecidade[25], nomecidade2[25];
    unsigned long int populacao, populacao2;  
    float area, area2;
    float pib, pib2;
    int pontosturisticos, pontosturisticos2;  
    float superpoder, superpoder2;
    
    //declarar as caracteristicas das cartas:
    printf("Digite o nome do estado 01: \n");
    scanf("%s", estado);
    printf("Digite o nome do estado 02: \n");
    scanf("%s", estado2);
    
    printf("Digite o nome da cidade 01: \n");
    scanf("%s", nomecidade);
    printf("Digite o nome da cidade 02: \n");
    scanf("%s", nomecidade2);

    printf("Digite a populacao 01: \n");
    scanf("%lu", &populacao);
    printf("Digite a populacao 02: \n");
    scanf("%lu", &populacao2);

    printf("Digite número de pontos turisticos 01: \n");
    scanf("%d", &pontosturisticos);
    printf("Digite número de pontos turisticos 02: \n");
    scanf("%d", &pontosturisticos2);

    printf("Digite o tamanho da area 01: \n");
    scanf("%f", &area);
    printf("Digite o tamanho da area 02: \n");
    scanf("%f", &area2);

    printf("Digite o PIB 01: \n");
    scanf("%f", &pib);
    printf("Digite o PIB 02: \n");
    scanf("%f", &pib2);

    //apos usar o scanf, executar:
    float densidade_pop_c1 = (float)area / populacao;
    float densidade_pop_c2 = (float)area / populacao2;
    float pibpercapita = (float) pib * 1000000000.0f / populacao;
    float pibpercapita2 = (float) pib2 * 1000000000.0f / populacao2;
    superpoder = (float) populacao + pontosturisticos + area + pib + (1.0f / densidade_pop_c1) + (pib / populacao);
    superpoder2 = (float) populacao2 + pontosturisticos2 + area2 + pib2 + (1.0f / densidade_pop_c2) + (pib2 / populacao2);





    //Carta N1
    printf("Carta N1\n");
    printf("Estado: %s\n", estado);
    printf("Nome cidade: %s\n", nomecidade);
    printf("Populacao carta : %lu\n",populacao);
    printf("Area : %.2fkm²\n", area);
    printf("PIB : %.3f\n", pib);
    printf("Numero de pontos turisticos : %d\n", pontosturisticos);
    printf("Densidade populacional: %.2f\n", (float) densidade_pop_c1);
    printf("PIB per capita: %.2f\n", (float) pibpercapita);
    printf("SuperPoder: %.2f\n",  superpoder);
    
    //CartaN2
    printf("Carta N2\n");
    printf("Estado: %s\n", estado2);
    printf("Nome cidade: %s\n", nomecidade2);
    printf("Populacao: %lu\n",populacao2);
    printf("Area: %.2fkm²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f\n", (float) densidade_pop_c2);
    printf("PIB per capita: %.2f\n", (float) pibpercapita2);
    printf("SuperPoder: %.2f\n", superpoder2);
    
    //Ler qual a carta vencedora, na respectiva propriedade:
    if (populacao > populacao2) {
        printf("Carta N1 vence!\n");
    }else {
        printf("Carta N2 vence!\n");
    };

    if(area > area2){
        printf("Carta N1 vence!\n");
    }else {
        printf("Carta N2 vence!\n");
    };
    
    if(pib > pib2) {
        printf("Carta N1 vence!\n");
    }else {
        printf("Carta N2 vence!\n");
    };

    if(pontosturisticos > pontosturisticos2) {
        printf("Carta N1 vence!\n");
    }else {
        printf("Carta N2 vence!\n");
    };

    if(densidade_pop_c1 > densidade_pop_c2) {
        printf("Carta N1 vence!\n");
    }else {
        printf("Carta N2 vence!\n");
    };
    
    if(pibpercapita > pibpercapita2) {
        printf("Carta N1 vence!\n");
    }else {
        printf("Carta N2 vence!\n");
    };

    if(superpoder > superpoder2) {
        printf("Carta N1 vence!\n");
    }else {
        printf("Carta N2 vence!\n");
    };

    char cidadeVencedora[20] = 
    printf("A cidade vencedora é : %s\n", cidadeVencedora)
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
