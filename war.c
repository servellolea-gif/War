#include <stdio.h>
#include <string.h>

#define MAX_TERRITORIOS 5
#define TAM_STRING 100

struct territorio {
    char nome[TAM_STRING];
    char cor[TAM_STRING];
    int tropa;
};

void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    struct territorio mapa[MAX_TERRITORIOS];
    int totalTerritorios = 0;

    printf("Bem vindo ao War!\n");
    
    printf("======================\n");
            
    printf("Comece cadastrando os %d territórios iniciais do nosso mundo.\n", MAX_TERRITORIOS);
    
        //Loop para cadastrar os territórios iniciais
        for (totalTerritorios = 0; totalTerritorios < MAX_TERRITORIOS; totalTerritorios++) {
           
            printf("\n --- Território %d ---\n", totalTerritorios + 1);
            
            printf("Digite o nome do território: ");
            fgets(mapa[totalTerritorios].nome, TAM_STRING, stdin);
            mapa[totalTerritorios].nome[strcspn(mapa[totalTerritorios].nome, "\n")] = '\0'; 
            
            printf("Digite a cor do território: ");
            fgets(mapa[totalTerritorios].cor, TAM_STRING, stdin);
            mapa[totalTerritorios].cor[strcspn(mapa[totalTerritorios].cor, "\n")] = '\0'; 
            
            printf("Digite a quantidade de tropas (número inteiro): ");
            scanf("%d", &mapa[totalTerritorios].tropa);

            limparBufferEntrada(); // Limpa o \n deixado pelo scanf
            
        } 

        printf("\nTerritórios cadastrados com sucesso!\n");

        printf("========================================\n");    
        printf("MAPA MUNDI - ATÉ O MOMENTO\n");
        printf("========================================\n");

        for (int i = 0; i < MAX_TERRITORIOS; i++) {
            printf("Território %d:\n", i + 1);
            printf("Nome: %s\n", mapa[i].nome); 
            printf("Dominado pelo exercito: %s\n", mapa[i].cor);  
            printf("Tropas: %d\n", mapa[i].tropa);
            printf("----------------------\n");
        }

    return 0;  

}
 