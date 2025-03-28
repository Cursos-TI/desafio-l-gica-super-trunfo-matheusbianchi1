#include <stdio.h>
#include <string.h>

int main(){
    // Declaração das variáveis
    int pt1, pt2;
    unsigned long int pop1, pop2;
    float area1, area2, pib1, pib2, densidadepopulacional1, densidadepopulacional2, pibpercapita1, pibpercapita2;
    float resultado1, resultado2, superpoder1, superpoder2;
    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char nome1[100], nome2[100];


    //Cadastro da Primeira carta
   
    printf("Seja bem vindo ao sistema de cartas do super trunfo!\n\n");
    printf("Vamos cadastrar os dados da primeira carta!\n");

    //Imprime os pedidos e lê o que foi escrito pelo teclado
    printf("Digite a letra que representa o estado da primeira carta: ");
    scanf(" %c", &estado1);
   
    printf("Digite o código da primeira carta: ");
    scanf("%s", codigo1);

    //Evitar Utilizar nomes com espaço devido a uma limitação do scanf
    
    printf("Digite o nome da cidade da primeira carta: ");
    getchar();
    fgets(nome1, 100, stdin);
    nome1[strcspn(nome1, "\n")] = '\0';
   
    printf("Digite o número da população da primeira carta: ");
    scanf("%lu", &pop1);
    
    printf("Digite o número da área da cidade da primeira carta: ");
    scanf("%f", &area1);
    
    printf("Digite o número do pib da primeira carta: ");
    scanf(" %f", &pib1);
    
    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf("%d", &pt1);

    //Separa os dados da carta 1 da carta 2 por razão de organização
    //Imprime os pedidos e lê o que foi escrito pelo teclado

    printf("\n");

    printf("Vamos cadastrar os dados da segunda carta!\n");
    printf("Digite a letra que representa o estado da segunda carta: ");
    scanf(" %c", &estado2);
    printf("Digite o código da segunda carta: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade da segunda carta: ");
    getchar();
    fgets(nome2, 100, stdin);
    nome2[strcspn(nome2, "\n")] = '\0';
    printf("Digite o número da população da segunda carta: ");
    scanf("%lu", &pop2);
    printf("Digite o número da área da cidade da segunda carta: ");
    scanf("%f", &area2);
    printf("Digite o número do pib da segunda carta: ");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf("%d", &pt2);
    printf("\n");

    //Exibir todas as informações cadastradas

    //Atribuindo valores às novas variáveis depois da entrada dos dados, incluindo o super poder

    densidadepopulacional1 = pop1 / area1;
    densidadepopulacional2 = pop2 / area2;
    pibpercapita1 =  pib1 / pop1;
    pibpercapita2 =  pib2 / pop2;
    resultado1 = (1.0 / densidadepopulacional1);
    resultado2 = (1.0 / densidadepopulacional2);
    superpoder1 = (pop1 + area1 + pib1 + pt1 + pibpercapita1 + resultado1);
    superpoder2 = (pop2 + area2 + pib2 + pt2 + pibpercapita2 + resultado2);

    
    printf("O cadastro das cartas está completo! Veja abaixo os dados!");
    printf("\n");

    //Carta 1

    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %lu\n", pop1);
    printf("Área: %.2f km^2\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pt1);
    printf("A Densidade Populacional é: %.2f hab/km^2\n", densidadepopulacional1);
    printf("O PIB Per Capita é: %.2f reais\n", pibpercapita1);
    printf("O Super Poder é: %f\n", superpoder1);

    //Carta 2

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %lu\n", pop2);
    printf("Área: %.2f km^2\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pt2);
    printf("A Densidade Populacional é: %.2f hab/km^2\n", densidadepopulacional2);
    printf("O PIB Per Capita é: %.2f\n", pibpercapita2);
    printf("O Super Poder é: %f\n", superpoder2);
    printf("\n");

    printf("***Comparação de Cartas (Atributo: Área)***\n");
    printf("\n");
    
    // Estrutura de decisão --> 1 for maior a carta 1 vence, caso contrário a carta 2 vence
    if (area1 > area2){
        printf("Carta 1 - %s: %.2f km^2\n", nome1, area1);
        printf("Carta 2 - %s: %.2f km^2\n", nome2, area2);
        printf("A Carta 1 Venceu!");
    }else {
        printf("Carta 1 - %s: %.2f km^2\n", nome1, area1);
        printf("Carta 2 - %s: %.2f km^2\n", nome2, area2);
        printf("A Carta 2 Venceu!");
    }

    return 0;
}