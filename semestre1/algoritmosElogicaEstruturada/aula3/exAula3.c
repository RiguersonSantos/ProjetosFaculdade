#include <stdio.h>

int main() {
    float produto, imposto, desconto, precoFinal; // Declara as variáveis que serão do tipo float(numeros decimais)
    char nomeCliente[50], nomeProduto[50];


    printf("Digite o nome do produto: ", &nomeProduto);
    scanf("%s", &nomeProduto);

    printf("O nome do produto é %s", &nomeProduto);

    return 0;
}