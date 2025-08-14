#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //variaveis que entrarao
    char codigo1[10], codigo2[10];
    char estado[30], estado2[30];
    char nomecidade[50], nomecidade2[50];
    unsigned long int populacao, populacao2;  
    double area, area2;
    double pib, pib2;
    int pontosturisticos, pontosturisticos2;  
    
     
    
    
    //declarar as caracteristicas das cartas:
    printf("Digite o nome do codigo da carta 01: \n");
    scanf(" %9[^\n]", codigo1);
    printf("Digite o nome do codigo da carta 02: \n");
    scanf(" %9[^\n]", codigo2);

    printf("Digite o nome do estado 01: \n");
    scanf(" %29[^\n]", estado);
    printf("Digite o nome do estado 02: \n");
    scanf(" %29[^\n]", estado2);
    
    printf("Digite o nome da cidade 01:   \n");
    scanf(  " %49[^\n]", nomecidade);
    printf("Digite o nome da cidade 02:   \n");
    scanf(  " %49[^\n]", nomecidade2);

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
    
    double pibpercapita1;
        if (populacao != 0){
            pibpercapita1 = (float) pib * 1000000000.0f / populacao;
        } else{
            printf("Atencao: Populacao da cidade 01 é zero. PIB per capita igual a 0\n");
            pibpercapita1 = 0.0f;
        }

    double pibpercapita2;
        if (populacao2 != 0){
            pibpercapita2 = (float) pib2 * 1000000000.0f / populacao2;
        } else{
            printf("Atencao: Populacao da cidade 02 é zero. PIB per capita igual a 0\n");
            pibpercapita2 = 0.0f;
        }
    
        //variaveis novas
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
    superpoder = (double) populacao + area + pib + (double) pontosturisticos + pibpercapita1 + termo_inverso_densidade_c1;
    double superpoder2 = 0.0;
    superpoder2 = (double) populacao2 + area2 + pib2 + (double) pontosturisticos2 + pibpercapita2 + termo_inverso_densidade_c2;
    



    
    //Carta N1
    printf("\n");
    printf("Carta N1\n");
    printf("Estado: %s\n", estado);
    printf("Nome cidade: %s\n", nomecidade);
    printf("Populacao carta : %lu\n",populacao);
    printf("Area : %.2fkm²\n", area);
    printf("PIB : %.2lf\n", pib);
    printf("Numero de pontos turisticos : %d\n", pontosturisticos);
    printf("Densidade populacional: %.2f\n", (float) densidade_pop_c1);
    printf("PIB per capita: %.2lf\n", (double) pibpercapita1);
    printf("SuperPoder: %.2lf     \n",  superpoder);
    printf("\n");
    
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
    printf("\n");
    
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


    int atributo1 = 0; // atributo1 = 0 empate, atributo1 = 1 carta1 vence , atributo1 = 2 carta2 vence
    
    // Escolha do primeiro atributo
    switch (escolha) {
    case 1: // População
        printf("\nPopulação:\n");
        printf("Carta 1 (%s): %lu\n", nomecidade, populacao);
        printf("Carta 2 (%s): %lu\n", nomecidade2, populacao2);
        if (populacao > populacao2){
            printf("*** Carta 1 venceu! ***\n"); atributo1 = 1;}
        else if (populacao2 > populacao){
            printf("*** Carta 2 venceu! ***\n"); atributo1 = 2;}
        else {
            printf("*** Empate! ***\n"); atributo1 = 0;}
        break;

    case 2: // Área
        printf("\nÁrea:\n");
        printf("Carta 1 (%s): %.2lf km²\n", nomecidade, area);
        printf("Carta 2 (%s): %.2lf km²\n", nomecidade2, area2);
        if (area > area2){
            printf("*** Carta 1 venceu! ***\n"); atributo1 = 1;}
        else if (area2 > area){
            printf("*** Carta 2 venceu! ***\n"); atributo1 = 2;}
        else{
            printf("*** Empate! ***\n"); atributo1 = 0;}
        break;

    case 3: // PIB
        printf("\nPIB:\n");
        printf("Carta 1 (%s): %.2lf\n", nomecidade, pib);
        printf("Carta 2 (%s): %.2lf\n", nomecidade2, pib2);
        if (pib > pib2){
            printf("*** Carta 1 venceu! ***\n"); atributo1 = 1;}
        else if (pib2 > pib){
            printf("*** Carta 2 venceu! ***\n"); atributo1 = 2;}
        else{
            printf("*** Empate! ***\n"); atributo1 = 0;}
        break;

    case 4: // Pontos turísticos
        printf("\nPontos turísticos:\n");
        printf("Carta 1 (%s): %d\n", nomecidade, pontosturisticos);
        printf("Carta 2 (%s): %d\n", nomecidade2, pontosturisticos2);
        if (pontosturisticos > pontosturisticos2){
            printf("*** Carta 1 venceu! ***\n"); atributo1 = 1;}
        else if (pontosturisticos2 > pontosturisticos){
            printf("*** Carta 2 venceu! ***\n"); atributo1 = 2;}
        else {
            printf("*** Empate! ***\n"); atributo1 = 0;}
        break;

    case 5: // Densidade populacional (menor vence)
        printf("\nDensidade populacional:\n");
        printf("Carta 1 (%s): %.2lf\n", nomecidade, densidade_pop_c1);
        printf("Carta 2 (%s): %.2lf\n", nomecidade2, densidade_pop_c2);
        if (densidade_pop_c1 < densidade_pop_c2){
            printf("*** Carta 1 venceu! ***\n"); atributo1 = 1;}
        else if (densidade_pop_c2 < densidade_pop_c1){
            printf("*** Carta 2 venceu! ***\n"); atributo1 = 2;}
        else {
            printf("*** Empate! ***\n"); atributo1 = 0;}
        break;

    case 6: // PIB per capita
        printf("\nPIB per capita:\n");
        printf("Carta 1 (%s): %.2lf\n", nomecidade, pibpercapita1);
        printf("Carta 2 (%s): %.2lf\n", nomecidade2, pibpercapita2);
        if (pibpercapita1 > pibpercapita2){
            printf("*** Carta 1 venceu! ***\n"); atributo1 = 1;}
        else if (pibpercapita2 > pibpercapita1){
            printf("*** Carta 2 venceu! ***\n"); atributo1 = 2;}
        else{
            printf("*** Empate! ***\n"); atributo1 = 0;}
        break;

    case 7: // Super Poder
        printf("\nSuper Poder:\n");
        printf("Carta 1 (%s): %.2lf\n", nomecidade, superpoder);
        printf("Carta 2 (%s): %.2lf\n", nomecidade2, superpoder2);
        if (superpoder > superpoder2){
            printf("*** Carta 1 venceu!***\n"); atributo1 = 1;}
        else if (superpoder2 > superpoder){
            printf("***Carta 2 venceu!***\n"); atributo1 = 2;}
        else{
            printf("*** Empate! ***\n"); atributo1 = 0;}
        break;

    default:
        printf("*** Opção inválida! ***\n");
        break;
}

// Escolha do Segundo atributo
    
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
    if (escolha2 == escolha){
        printf("Voce ja escolheu a mesma opcao no primeiro atributo.!\n");
    } else if (escolha2 < 1 || escolha2 > 7){
        printf("Opcao invalida! Por favor escolha um numero entre 1 a 7.\n");
    }
    
    
    printf("\nResultado:\n");
    
    int atributo2 = 0;
    
switch (escolha2) {
    case 1: // População
        printf("\nPopulação:\n");
        printf("Carta 1 (%s): %lu\n", nomecidade, populacao);
        printf("Carta 2 (%s): %lu\n", nomecidade2, populacao2);
        if (populacao > populacao2){
            printf("*** Carta 1 venceu! ***\n"); atributo2 = 1;}
        else if (populacao2 > populacao){
            printf("*** Carta 2 venceu! ***\n"); atributo2 = 2;}
        else {
            printf("*** Empate! ***\n"); atributo2 = 0;}
        break;

    case 2: // Área
        printf("\nÁrea:\n");
        printf("Carta 1 (%s): %.2lf km²\n", nomecidade, area);
        printf("Carta 2 (%s): %.2lf km²\n", nomecidade2, area2);
        if (area > area2){
            printf("*** Carta 1 venceu! ***\n"); atributo2 = 1;}
        else if (area2 > area){
            printf("*** Carta 2 venceu! ***\n"); atributo2 = 2;}
        else{
            printf("*** Empate! ***\n"); atributo2 = 0;}
        break;

    case 3: // PIB
        printf("\nPIB:\n");
        printf("Carta 1 (%s): %.2lf\n", nomecidade, pib);
        printf("Carta 2 (%s): %.2lf\n", nomecidade2, pib2);
        if (pib > pib2){
            printf("*** Carta 1 venceu! ***\n"); atributo2 = 1;}
        else if (pib2 > pib){
            printf("*** Carta 2 venceu! ***\n"); atributo2 = 2;}
        else{
            printf("*** Empate! ***\n"); atributo2 = 0;}
        break;

    case 4: // Pontos turísticos
        printf("\nPontos turísticos:\n");
        printf("Carta 1 (%s): %d\n", nomecidade, pontosturisticos);
        printf("Carta 2 (%s): %d\n", nomecidade2, pontosturisticos2);
        if (pontosturisticos > pontosturisticos2){
            printf("*** Carta 1 venceu! ***\n"); atributo2 = 1;}
        else if (pontosturisticos2 > pontosturisticos){
            printf("*** Carta 2 venceu! ***\n"); atributo2 = 2;}
        else {
            printf("*** Empate! ***\n"); atributo2 = 0;}
        break;

    case 5: // Densidade populacional (menor vence)
        printf("\nDensidade populacional:\n");
        printf("Carta 1 (%s): %.2lf\n", nomecidade, densidade_pop_c1);
        printf("Carta 2 (%s): %.2lf\n", nomecidade2, densidade_pop_c2);
        if (densidade_pop_c1 < densidade_pop_c2){
            printf("*** Carta 1 venceu! ***\n"); atributo2 = 1;}
        else if (densidade_pop_c2 < densidade_pop_c1){
            printf("*** Carta 2 venceu! ***\n"); atributo2 = 2;}
        else {
            printf("*** Empate! ***\n"); atributo2 = 0;}
        break;

    case 6: // PIB per capita
        printf("\nPIB per capita:\n");
        printf("Carta 1 (%s): %.2lf\n", nomecidade, pibpercapita1);
        printf("Carta 2 (%s): %.2lf\n", nomecidade2, pibpercapita2);
        if (pibpercapita1 > pibpercapita2){
            printf("*** Carta 1 venceu! ***\n"); atributo2 = 1;}
        else if (pibpercapita2 > pibpercapita1){
            printf("*** Carta 2 venceu! ***\n"); atributo2 = 2;}
        else{
            printf("*** Empate! ***\n"); atributo2 = 0;}
        break;

    case 7: // Super Poder
        printf("\nSuper Poder:\n");
        printf("Carta 1 (%s): %.2lf\n", nomecidade, superpoder);
        printf("Carta 2 (%s): %.2lf\n", nomecidade2, superpoder2);
        if (superpoder > superpoder2){
            printf("*** Carta 1 venceu!***\n"); atributo2 = 1;}
        else if (superpoder2 > superpoder){
            printf("***Carta 2 venceu!***\n"); atributo2 = 2;}
        else{
            printf("*** Empate! ***\n"); atributo2 = 0;}
        break;

    default:
        printf("*** Opção inválida! ***\n");
        break;
}
    


    int pontos_cartas1 = 0;
    int pontos_cartas2 = 0;
    
    if (atributo1 == 1){
        pontos_cartas1++;
    }else if (atributo1 == 2){
        pontos_cartas2++;
    } 
    if (atributo2 == 1){
        pontos_cartas1++;
    }else if (atributo2 == 2){
        pontos_cartas2++;
    }
    
    printf ("Resultado da RODADA!!!\n");

    if(pontos_cartas1 == 2){
        printf("Vencedor da Rodada: %s!\n", nomecidade);
    }else if (pontos_cartas2 == 2){
        printf("Vencedor da Rodada: %s!\n", nomecidade2);
    }else {
        printf("Resultado da Rodada: Empate!\n");
    }

    
    
    

    return 0;
 
}
