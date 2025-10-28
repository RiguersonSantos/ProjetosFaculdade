#include <stdio.h>

int main() {
    //Variáveis // Declara as variáveis que serão do tipo float(numeros decimais)
    char nomeCliente[50], nomeProduto[50];
    float desconto,precoFinal, valorProduto, produtoCDesconto;
    float transporte,percentualTransporte, precoFinalTransp;

    //Constantes // Declara constantes usadas no programas
    const float taxaTransporte = 0.05; 
    const float taxaICMS =  0.06;
    const float taxaRevenda = 0.1;

    //Inicio do programa
    //Pede e lê o nome do cliente
    printf("Digite seu nome de cliente: ");
    scanf("%s", nomeCliente);

    //Pede e lê o nome do produto
    printf("Digite o nome do produto: ");
    scanf("%s", nomeProduto);

    //Pede e lê o valor do produto
    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);

    //Pede e lê o desconto
    printf("Digite o desconto disponivel: (ex:20 para 20 por cento)");
    scanf("%f", &desconto);


    //Pede e lê o desconto de transporte
    printf("Digite o valor do desconto de transporte disponivel: (ex:10 para 10 por cento)");
    scanf("%f", &percentualTransporte);


    transporte = valorProduto * (percentualTransporte /100);
    precoFinalTransp = transporte * (1 - percentualTransporte/100);


    produtoCDesconto = valorProduto * (1 - desconto/100);
    precoFinal = produtoCDesconto + precoFinalTransp;


    printf("Produto com desconto: R$ %.2f\n", produtoCDesconto);
    printf("Frete com desconto: R$ %.2f\n", precoFinalTransp);
    printf("Total a pagar: R$ %.2f\n", precoFinal);

   
    return 0;
}