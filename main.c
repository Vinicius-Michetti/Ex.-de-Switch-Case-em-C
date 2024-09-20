#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Uma empresa vende o mesmo produto para quatro estados diferentes. Cada estado possui
uma alíquota de imposto sobre o produto. Escreva um programa em que o usuário insira o valor
e a primeira letra do estado de destino do produto. O programa deve retornar o preço final
(produto + imposto). Se o estado não for válido, o sistema deve mostrar uma mensagem de erro.*/

    float p;
    char opcao;

    printf("Digite o valor do produto:\n");
    scanf("%f", &p);

    printf("Digite a opcao desejada:\n");
    printf("M - Minas Gerais\n");
    printf("S - Sao Paulo\n");
    printf("R - Rio de Janeiro\n");
    printf("E - Espirito Santo\n");

    fflush(stdin);
    opcao = getchar();
    printf("%c\n", opcao);

    switch (opcao) {
        case 'M':
            printf("O preco final, em Minas Gerais, e %.2f", 1.07 * p);
            break;
        case 'S':
            printf("O preco final, em Sao Paulo, e %.2f", 1.12 * p);
            break;
        case 'R':
            printf("O preco final, em Rio de Janeiro, e %.2f", 1.15 * p);
            break;
        case 'E':
            printf("O preco final, em Espirito Santo, e %f", 1.08 * p);
            break;
        default: printf("Opcao invalida");
    }
}
