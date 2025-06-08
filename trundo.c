#include <stdio.h>
#include <string.h>

#define MAX_CARTAS 10

// Estrutura da carta
struct Carta {
    char nome[30];
    int forca;
    int velocidade;
    int inteligencia;
};

int main() {
    struct Carta cartas[MAX_CARTAS];
    int quantidade = 0;
    int opcao;

    while (1) {
        printf("\n--- SUPER TRUNFO ---\n");
        printf("1. Adicionar nova carta\n");
        printf("2. Listar cartas\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (quantidade >= MAX_CARTAS) {
                printf("Limite de cartas atingido!\n");
            } else {
                printf("Nome da carta: ");
                scanf(" %[^\n]", cartas[quantidade].nome); // Lê com espaços

                printf("Forca (0-100): ");
                scanf("%d", &cartas[quantidade].forca);

                printf("Velocidade (0-100): ");
                scanf("%d", &cartas[quantidade].velocidade);

                printf("Inteligencia (0-100): ");
                scanf("%d", &cartas[quantidade].inteligencia);

                quantidade++;
                printf("Carta adicionada com sucesso!\n");
            }
        } else if (opcao == 2) {
            if (quantidade == 0) {
                printf("Nenhuma carta cadastrada.\n");
            } else {
                for (int i = 0; i < quantidade; i++) {
                    printf("\nCarta %d:\n", i + 1);
                    printf("Nome: %s\n", cartas[i].nome);
                    printf("Forca: %d\n", cartas[i].forca);
                    printf("Velocidade: %d\n", cartas[i].velocidade);
                    printf("Inteligencia: %d\n", cartas[i].inteligencia);
                }
            }
        } else if (opcao == 3) {
            printf("Saindo...\n");
            break;
        } else {
            printf("Opcao invalida!\n");
        }
    }

    return 0;
}
