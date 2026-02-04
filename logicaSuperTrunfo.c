#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    // VARIAVEIS CARTA 1   
    
    char estado1[20], cidade1[20], codigo1[10];
    
    unsigned long int população1; 
    
    int pontosturisticos1;
    
    float area1, densidade1;
    
    double pib1, pibpercap1;

    long double SuperPoder1;
   
    // VARIAVEIS CARTA 2

    char  estado2[20], cidade2[20], codigo2[10];
    
    unsigned long int população2;
    
    int pontosturisticos2;
    
    float area2, densidade2;
    
    double pib2, pibpercap2;

    long double SuperPoder2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Área para entrada de dados

     printf("   SISTEMA DE CADASTRO DE CARTAS ( CARTA 1 ) \n\n");          //TITULO DO SISTEMA DE CADASTRO
    
     printf("DIGITE O NOME DO ESTADO: ");
     fgets(estado1, 20, stdin);
    
     printf("DIGITE O CODIGO DA CARTA: ");
     scanf("%s", codigo1);
    
     printf("DIGITE O NOME DA CIDADE: ");
     scanf("%*c");                                            // LIMPA BUFFER DO ENTER
     fgets(cidade1, 20, stdin);
    
     printf("DIGITE O NUMERO DE HABITANTES: ");
     scanf(" %ld", &população1);
    
     printf("DIGITE A AREA DA CIDADE EM QUILOMETROS QUADRADOS: ");
     scanf("%f", &area1);
   
     printf("DIGITE O VALOR DO PRODUTO INTERNO BRUTO (PIB): ");
     scanf(" %lf", &pib1);
    
     printf("DIGITE A QUANTIDADE DE PONTOS TURISTCOS: ");
     scanf("%d", &pontosturisticos1);


     printf("\n");              // PULAR UMA LINHA PRA ORGANIZAÇÃO DA IMPRESSÃO

   
      // SISTEMA DE CADASTRO DA CARTA 2
    
    printf("   SISTEMA DE CADASTRO DE CARTAS ( CARTA 2 ) \n\n");       //TITULO DO SISTEMA DE CADASTRO
    
    scanf("%*c");                                          // LIMPA BUFFER DO ENTER
    printf("DIGITE O NOME DO ESTADO: ");
    fgets(estado2, 20, stdin);
    
    printf("DIGITE O CODIGO DA CARTA: ");
    scanf("%s", codigo2);
    
    printf("DIGITE O NOME DA CIDADE: ");
    scanf("%*c");                                          // LIMPA BUFFER DO ENTER
    fgets(cidade2, 20, stdin);
    
    printf("DIGITE O NUMERO DE HABITANTES: ");
    scanf(" %ld", &população2);
    
    printf("DIGITE A AREA DA CIDADE EM QUILOMETROS QUADRADOS: ");
    scanf("%f", &area2);
    
    printf("DIGITE O VALOR DO PRODUTO INTERNO BRUTO (PIB): ");
    scanf(" %lf", &pib2);
    
    printf("DIGITE A QUANTIDADE DE PONTOS TURISTCOS: ");
    scanf("%d", &pontosturisticos2);

  // mutiplicando o valor do pib pra chegar no valor em bilhões das cartas 1 e 2
        
    pib1 = pib1 * 1000000000.0;  
    pib2 = pib2 * 1000000000.0;
       

  //Calculando Densidade Populacional e PIB per Capita das Carta 1 e 2  
    
    densidade1 = população1 / area1;
    pibpercap1 = (double) pib1 / população1;

    densidade2 = população2 / area2;
    pibpercap2 = (double) pib2 / população2;
    
  //Calculando a soma do super poder 
    
    SuperPoder1 = (long double) população1 + area1 + pib1 + 
    pontosturisticos1 + densidade1 + pibpercap1;
  
    SuperPoder2 = (long double) população2 + area2 + pib2 + 
    pontosturisticos2 + densidade2 + pibpercap2;

        printf("\n\n");

      // Área para exibição dos dados da cidade

    printf(" CARTA: 1 \n\n");
    printf(" Estado: %s ", estado1);
    printf("Codigo: %s \n", codigo1);
    printf(" Cidade: %s", cidade1);
    printf(" População: %ld \n", população1);
    printf(" Area: %.2f km² \n", area1);            
    printf(" PIB: %.2f bilhões de reais \n", pib1 / 1000000000.0);      //divisão pra abeviar o valor na impressão
    printf(" Numero de pontos turisticos: %d \n", pontosturisticos1);
    printf(" Densidade populacional: %.2f hab/km² \n", densidade1);
    printf(" PIB per Capita: %.2lf Reais \n", pibpercap1);
    printf(" Super Poder: %.Lf \n\n", SuperPoder1);

    printf(" CARTA: 2 \n\n");
    printf(" Estado: %s ", estado2);
    printf("Codigo: %s \n", codigo2);
    printf(" Cidade: %s", cidade2);
    printf(" População: %ld \n", população2);
    printf(" Area: %.2f km² \n", area2);            
    printf(" PIB: %.2f bilhões de reais \n", pib2 / 1000000000.0);      //divisão pra abeviar o valor na impressão
    printf(" Numero de pontos turisticos: %d \n", pontosturisticos2);
    printf(" Densidade populacional: %.2f hab/km² \n", densidade2);
    printf(" PIB per Capita: %.2lf Reais \n", pibpercap2);
    printf(" Super Poder: %.Lf \n\n", SuperPoder2);

   printf("\n"); // PULAR UMA LINHA PRA ORGANIZAÇÃO DA IMPRESSÃO

   
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

     // Comparação das cartas usando a estrutura de decisão if-else

    printf("xxxxx COMPARAÇÃO DAS CARTAS XXXXX\n\n");     
   
     if (população1 > população2)
    {
        printf("- A População da Carta 1 (São Paulo) venceu!\n");
    } else {
        printf("- A População da Carta 2 (Rio de janeiro) venceu!\n");
    }
    
    if (area1 > area2)
    {
        printf("- Area da Carta 1 (São Paulo) venceu!\n");
    } else {
        printf("- Area da Carta 2 (Rio de janeiro) venceu!\n");
    }
    
    if (pib1 > pib2)
    {
        printf("- PIB da Carta 1 (São Paulo) venceu!\n");
    } else {
        printf("- PIB da Carta 2 (Rio de janeiro) venceu!\n");
    }    

    if (pontosturisticos1 > pontosturisticos2)
    {
        printf("- Pontos Turisticos da Carta 1 (São Paulo) venceu!\n");
    } else {
        printf("- Pontos Turisticos da Carta 2 (Rio de janeiro) venceu\n");
    }    

    
    if ( densidade1 < densidade2)
    {
        printf("- A densidade populacional da Carta 1 (São Paulo) venceu!\n");
    } else {
        printf("- A densidade populacional da Carta 2 (Rio de janeiro) venceu\n");
    }    
    
    if (pibpercap1 > pibpercap2)
    {
         printf("- O PIB Percap da Carta 1 (São Paulo) venceu!\n");
    }  else {
        printf("- O PIB Percap da Carta 2 (Rio de janeiro) venceu\n");
    }

    if (SuperPoder1 > SuperPoder2)
    {
         printf("- O super poder da Carta 1 (São Paulo) venceu!\n");
    } else {
        printf(" - O super poder da Carta 2 (Rio de janeiro) venceu\n\n");
    }
  
    printf ("\n\n");
    
    return 0;
}
