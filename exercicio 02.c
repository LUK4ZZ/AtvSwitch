#include <stdio.h>

int main() {
    int codigo;
    int quantidade;
    float preco_unitario;
    
    printf("--------------Cardapio--------------");
         printf("\nLanches \n\t\t\t 100- Cachorro quente \n\t\t\t 101- Bauru simples \n\t\t\t 102- Bauru c/ovo \n\t\t\t 103- Hamburguer \n\t\t\t 104-Cheeseburger");

    printf("\n\nDigite o código do item pedido (100 a 104): ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 100:
            preco_unitario = 10.10;
            break;
        case 101:
            preco_unitario = 8.30;
            break;
        case 102:
            preco_unitario = 8.50;
            break;
        case 103:
            preco_unitario = 12.50;
            break;
        case 104:
            preco_unitario = 13.25;
            break;
        default:
            printf("Código de item inválido.\n");
            return 1;
    }

    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("Quantidade inválida.\n");
        return 1;
    }

    float total = quantidade * preco_unitario;
    printf("Valor a ser pago: R$%.2f\n", total);
}
