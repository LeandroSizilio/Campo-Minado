#include <stdio.h>

int tamanho = 4;

void campo_v(int campo[tamanho][tamanho]){
    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho; j++){
            if (campo[i][j] == -1){   // verificar se é igual a ZERO, se sim, virefica seus vizinhos se são igual a -1 e assim atualiza seu valor para a quantidade de bombas.
                printf(" *");
            } else {
                int count = 0;
                for (int x = i-1; x <= i+1; x++){
                    for (int y = j-1; y <= j+1; y++){
                        if (x >= 0 && x < tamanho && y >= 0 && y < tamanho && campo[x][y]== -1){
                            count++;
                        }
                    }
                }
                printf(" %d", count);
            }
        }
        printf("\n");
    }
}

int main() {
    int campo[tamanho][tamanho];
    printf("Campo minado de %d x %d :\n", tamanho, tamanho);

    printf("Insira os elementos do campo minado sendo -1 para Bomba e 0 para espaço vazio: \n");
    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho; j++){
            printf("campo - [%d],[%d] : \n", i, j);
            scanf("%d", &campo[i][j]);
        }
    }
    printf("\nCampo minado de %d x %d :\n\n", tamanho, tamanho);
    campo_v(campo);
}   

