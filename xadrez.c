#include <stdio.h>

#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

int main() {
    printf("\nmovimentação do bispo:\n");
    for(int i = 0; i < MOV_BISPO; i++); {
       printf("direita\n");
       printf("cima\n");
    }

    printf("\nmovimentação da torre:\n");
    for(int i = 0; i < MOV_TORRE; i++); {
        printf("direita\n");
    }

    printf("\nmovimentação rainha:\n");
     int count = 0;
     while (count < MOV_RAINHA) {
        printf("esquerda\n");
        count++;
     }


    return 0;
}
