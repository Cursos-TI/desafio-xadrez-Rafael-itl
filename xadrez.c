#include <stdio.h>

#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8
#define MOV_CAVALO_LINHAS 2
#define MOV_CAVALO_COLUNAS 1


// Função recursiva para movimentar a Torre (Direita)
void moverTorre(int movimentos) {
   if (movimentos <= 0) return;
   printf("Direita\n");
   moverTorre(movimentos - 1);
}

// Função recursiva para movimentar a Rainha (Esquerda)
void moverRainha(int movimentos) {
   if (movimentos <= 0) return;
   printf("Esquerda\n");
   moverRainha(movimentos - 1);
}

// Função recursiva e com loops aninhados para movimentar o Bispo (Diagonal Direita para Cima)
void moverBispo(int i) {
   if (i >= MOV_BISPO) return;
   for (int j = 0; j < 1; j++) {
       printf("Direita\n");
       printf("Cima\n");
   }
   moverBispo(i + 1);
}
int main() {
   // Movimentação do Bispo (Diagonal Superior Direita)
   printf("Movimentação do Bispo:\n");
   moverBispo(0);

   // Movimentação da Torre (Direita)
   printf("\nMovimentação da Torre:\n");
   moverTorre(MOV_TORRE);

   // Movimentação da Rainha (Esquerda)
   printf("\nMovimentação da Rainha:\n");
   moverRainha(MOV_RAINHA);
     printf("\nmovimentação do cavalo\,");
     for(int i = 0; j = 0; i > MOV_CAVALO_LINHAS - 1 || j < MOV_CAVALO_COLUNAS;) {
        if ( i MOV_CAVALO_LINHAS - 1){
      printf("cima\n");
      i--;
      continue;
     }

     if( j < MOV_CAVALO_COLUNAS){
        printf("direita\n");
        j++;
     }
     if(i <= MOV_CAVALO_LINHAS - 1 && j >= MOV_CAVALO_COLUNAS){
      break;
     }
   }

    return 0;
}
