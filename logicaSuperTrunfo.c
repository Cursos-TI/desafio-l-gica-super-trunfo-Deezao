#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //variaveis que entrarao
    char estado[3], estado2[3];
    char nomecidade[25], nomecidade2[25];
    unsigned long int populacao, populacao2;  
    double area, area2;
    double pib, pib2;
    int pontosturisticos, pontosturisticos2;  
    
     
    
    
    //declarar as caracteristicas das cartas:
    printf("Digite o nome do estado 01: \n");
    scanf("%3s", estado);
    printf("Digite o nome do estado 02: \n");
    scanf("%3s", estado2);
    
    printf("Digite o nome da cidade 01:   \n");
    scanf(  " %25s", nomecidade);
    printf("Digite o nome da cidade 02:   \n");
    scanf(  " %25s", nomecidade2);

    printf("Digite a populacao 01: \n");
    scanf("%lu", &populacao);
    printf("Digite a populacao 02: \n");
    scanf("%lu", &populacao2);

    printf("Digite número de pontos turisticos 01: \n");
    scanf("%d", &pontosturisticos);
    printf("Digite número de pontos turisticos 02: \n");
    scanf("%d", &pontosturisticos2);

    printf("Digite o tamanho da area 01: \n");
    scanf("%lf", &area);
    printf("Digite o tamanho da area 02: \n");
    scanf("%lf", &area2);

    printf("Digite o PIB 01: \n");
    scanf("%lf", &pib);
    printf("Digite o PIB 02: \n");
    scanf("%lf", &pib2);

    //apos usar o scanf, executar:
    
    
    
    float densidade_pop_c1;
        if(area != 0.0f){
            densidade_pop_c1 = (float) populacao / area;
        }else {
            printf("Atencao: Area da cidade 01 é zero. Densidade populacional igual a 0\n");
            densidade_pop_c1 = 0.0f;
        }   
    
    float densidade_pop_c2;
        if(area2 != 0.0f){
            densidade_pop_c2 = (float) populacao2 / area2;
        }else {
        printf("Atencao: Area da cidade 02 é zero. Densidade populacional igual a 0\n");
             densidade_pop_c2 = 0.0f;
        }
    
    double pibpercapita;
        if (populacao != 0){
            pibpercapita = (float) pib * 1000000000.0f / populacao;
        } else{
            printf("Atencao: Populacao da cidade 01 é zero. PIB per capita igual a 0\n");
            pibpercapita = 0.0f;
        }

    double pibpercapita2;
        if (populacao2 != 0){
            pibpercapita2 = (float) pib2 * 1000000000.0f / populacao2;
        } else{
            printf("Atencao: Populacao da cidade 01 é zero. PIB per capita igual a 0\n");
            pibpercapita2 = 0.0f;
        }
    
    double pib_total_reais_c1 = pib * 1000000000.0;
    double pib_total_reais_c2 = pib2 * 1000000000.0;

    double termo_inverso_densidade_c1 = 0.0;
    if (densidade_pop_c1 != 0.0f){
        termo_inverso_densidade_c1 = (1.0 / densidade_pop_c1);
    }else {
        printf("Aviso: Densidade populacional da cidade 01 e zero. Inverso da densidade nao adicionado ao Super Poder.\n");
    }
    
    

    double termo_inverso_densidade_c2 = 0.0;
    if (densidade_pop_c2 != 0.0f){
        termo_inverso_densidade_c2 = (1.0 / densidade_pop_c2);
    }else {
        printf("Aviso: Densidade populacional da cidade 02 e zero. Inverso da densidade nao adicionado ao Super Poder.\n");
    }
    double superpoder = 0.0;
    superpoder = (double) populacao + pontosturisticos + area + pib_total_reais_c1 + termo_inverso_densidade_c1;
    double superpoder2 = 0.0;
    superpoder2 = (double) populacao2 + pontosturisticos2 + area2 + pib_total_reais_c2 + termo_inverso_densidade_c2;
    




    //Carta N1
    printf("Carta N1\n");
    printf("Estado: %s\n", estado);
    printf("Nome cidade: %s\n", nomecidade);
    printf("Populacao carta : %lu\n",populacao);
    printf("Area : %.2fkm²\n", area);
    printf("PIB : %.2lf\n", pib);
    printf("Numero de pontos turisticos : %d\n", pontosturisticos);
    printf("Densidade populacional: %.2f\n", (float) densidade_pop_c1);
    printf("PIB per capita: %.2lf\n", (double) pibpercapita);
    printf("SuperPoder: %.2lf     \n",  superpoder);
    
    //CartaN2
    printf("Carta N2\n");
    printf("Estado: %s\n", estado2);
    printf("Nome cidade: %s\n", nomecidade2);
    printf("Populacao: %lu\n",populacao2);
    printf("Area: %.2fkm²\n", area2);
    printf("PIB: %.2lf\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f\n", (float) densidade_pop_c2);
    printf("PIB per capita: %.2lf\n", (double) pibpercapita2);
    printf("SuperPoder: %.2lf   \n", superpoder2);
    
    //Ler qual a carta vencedora, na respectiva propriedade:
     int escolha;
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional (menor vence)\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("Digite a opção: ");
    scanf("%d", &escolha);

    printf("\nResultado:\n");
    
    switch (escolha) {
    case 1: // População
        printf("\nPopulação:\n");
        printf("Carta 1 (%s): %lu\n", nomecidade, populacao);
        printf("Carta 2 (%s): %lu\n", nomecidade2, populacao2);
        if (populacao > populacao2)
            printf("*** Carta 1 venceu! ***\n");
        else if (populacao2 > populacao)
            printf("*** Carta 2 venceu! ***\n");
        else
            printf("*** Empate! ***\n");
        break;

    case 2: // Área
        printf("\nÁrea:\n");
        printf("Carta 1 (%s): %.2lf km²\n", nomecidade, area);
        printf("Carta 2 (%s): %.2lf km²\n", nomecidade2, area2);
        if (area > area2)
            printf("*** Carta 1 venceu! ***\n");
        else if (area2 > area)
            printf("*** Carta 2 venceu! ***\n");
        else
            printf("*** Empate! ***\n");
        break;

    case 3: // PIB
        printf("\nPIB:\n");
        printf("Carta 1 (%s): %.2lf\n", nomecidade, pib);
        printf("Carta 2 (%s): %.2lf\n", nomecidade2, pib2);
        if (pib > pib2)
            printf("*** Carta 1 venceu! ***\n");
        else if (pib2 > pib)
            printf("*** Carta 2 venceu! ***\n");
        else
            printf("*** Empate! ***\n");
        break;

    case 4: // Pontos turísticos
        printf("\nPontos turísticos:\n");
        printf("Carta 1 (%s): %d\n", nomecidade, pontosturisticos);
        printf("Carta 2 (%s): %d\n", nomecidade2, pontosturisticos2);
        if (pontosturisticos > pontosturisticos2)
            printf("*** Carta 1 venceu! ***\n");
        else if (pontosturisticos2 > pontosturisticos)
            printf("*** Carta 2 venceu! ***\n");
        else
            printf("*** Empate! ***\n");
        break;

    case 5: // Densidade populacional (menor vence)
        printf("\nDensidade populacional:\n");
        printf("Carta 1 (%s): %.2lf\n", nomecidade, densidade_pop_c1);
        printf("Carta 2 (%s): %.2lf\n", nomecidade2, densidade_pop_c2);
        if (densidade_pop_c1 < densidade_pop_c2)
            printf("*** Carta 1 venceu! ***\n");
        else if (densidade_pop_c2 < densidade_pop_c1)
            printf("*** Carta 2 venceu! ***\n");
        else
            printf("*** Empate! ***\n");
        break;

    case 6: // PIB per capita
        printf("\nPIB per capita:\n");
        printf("Carta 1 (%s): %.2lf\n", nomecidade, pibpercapita);
        printf("Carta 2 (%s): %.2lf\n", nomecidade2, pibpercapita2);
        if (pibpercapita > pibpercapita2)
            printf("*** Carta 1 venceu! ***\n");
        else if (pibpercapita2 > pibpercapita)
            printf("*** Carta 2 venceu! ***\n");
        else
            printf("*** Empate! ***\n");
        break;

    case 7: // Super Poder
        printf("\nSuper Poder:\n");
        printf("Carta 1 (%s): %.2lf\n", nomecidade, superpoder);
        printf("Carta 2 (%s): %.2lf\n", nomecidade2, superpoder2);
        if (superpoder > superpoder2)
            printf("*** Carta 1 venceu!***\n");
        else if (superpoder2 > superpoder)
            printf("***Carta 2 venceu!***\n");
        else
            printf("*** Empate! ***\n");
        break;

    default:
        printf("*** Opção inválida! ***\n");
        break;
}
int escolha2;
    printf("\nEscolha o segundo atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional (menor vence)\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("Digite a opção: ");
    scanf("%d", &escolha2);

    printf("\nResultado:\n");
    
    switch (escolha2) {
    case 1: // População
        printf("\nPopulação:\n");
        printf("Carta 1 (%s): %lu\n", nomecidade, populacao);
        printf("Carta 2 (%s): %lu\n", nomecidade2, populacao2);
        if (populacao > populacao2)
            printf("*** Carta 1 venceu! ***\n");
        else if (populacao2 > populacao)
            printf("*** Carta 2 venceu! ***\n");
        else
            printf("*** Empate! ***\n");
        break;

    case 2: // Área
        printf("\nÁrea:\n");
        printf("Carta 1 (%s): %.2lf km²\n", nomecidade, area);
        printf("Carta 2 (%s): %.2lf km²\n", nomecidade2, area2);
        if (area > area2)
            printf("*** Carta 1 venceu! ***\n");
        else if (area2 > area)
            printf("*** Carta 2 venceu! ***\n");
        else
            printf("*** Empate! ***\n");
        break;

    case 3: // PIB
        printf("\nPIB:\n");
        printf("Carta 1 (%s): %.2lf\n", nomecidade, pib);
        printf("Carta 2 (%s): %.2lf\n", nomecidade2, pib2);
        if (pib > pib2)
            printf("*** Carta 1 venceu! ***\n");
        else if (pib2 > pib)
            printf("*** Carta 2 venceu! ***\n");
        else
            printf("*** Empate! ***\n");
        break;

    case 4: // Pontos turísticos
        printf("\nPontos turísticos:\n");
        printf("Carta 1 (%s): %d\n", nomecidade, pontosturisticos);
        printf("Carta 2 (%s): %d\n", nomecidade2, pontosturisticos2);
        if (pontosturisticos > pontosturisticos2)
            printf("*** Carta 1 venceu! ***\n");
        else if (pontosturisticos2 > pontosturisticos)
            printf("*** Carta 2 venceu! ***\n");
        else
            printf("*** Empate! ***\n");
        break;

    case 5: // Densidade populacional (menor vence)
        printf("\nDensidade populacional:\n");
        printf("Carta 1 (%s): %.2lf\n", nomecidade, densidade_pop_c1);
        printf("Carta 2 (%s): %.2lf\n", nomecidade2, densidade_pop_c2);
        if (densidade_pop_c1 < densidade_pop_c2)
            printf("*** Carta 1 venceu! ***\n");
        else if (densidade_pop_c2 < densidade_pop_c1)
            printf("*** Carta 2 venceu! ***\n");
        else
            printf("*** Empate! ***\n");
        break;

    case 6: // PIB per capita
        printf("\nPIB per capita:\n");
        printf("Carta 1 (%s): %.2lf\n", nomecidade, pibpercapita);
        printf("Carta 2 (%s): %.2lf\n", nomecidade2, pibpercapita2);
        if (pibpercapita > pibpercapita2)
            printf("*** Carta 1 venceu! ***\n");
        else if (pibpercapita2 > pibpercapita)
            printf("*** Carta 2 venceu! ***\n");
        else
            printf("*** Empate! ***\n");
        break;

    case 7: // Super Poder
        printf("\nSuper Poder:\n");
        printf("Carta 1 (%s): %.2lf\n", nomecidade, superpoder);
        printf("Carta 2 (%s): %.2lf\n", nomecidade2, superpoder2);
        if (superpoder > superpoder2)
            printf("*** Carta 1 venceu!***\n");
        else if (superpoder2 > superpoder)
            printf("***Carta 2 venceu!***\n");
        else
            printf("*** Empate! ***\n");
        break;

    default:
        printf("*** Opção inválida! ***\n");
        break;
}
    if (escolha && escolha2){
        printf("Voce ganhou!");
    }else if (escolha != escolha2){
        printf("Empatou!");
    }else {
        printf("Voce perdeu!");
    }
    
    

    return 0;
 
}
