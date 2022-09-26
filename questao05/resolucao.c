#include <stdio.h>

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5}; // vetor de tamanho 5
  float *f;
  int i;
  f = vet; // ponteiro para float f recebe o vetor vet
  printf("contador/valor/valor/endereco/endereco");

  for(i = 0 ; i <= 4 ; i++){
      printf("\n i = %d ",i); // 0 , 1, 2, 3, 4
      printf("vet[%d] = %.1f ",i, vet[i]); // valor de i e o conteudo do array naquela posicao de i - 1.1,2.2,3.3,4.4,5.5
      printf("*(f + %d) = %.1f ",i, *(f+i)); // valor de i e o conteudo no ponteiro naquela posicao de i - 1.1,2.2,3.3,4.4,5.5
      printf("&vet[%d] = %X ",i, &vet[i]); // contador i , endereco de memoria na posicao i do array vet
      printf("(f + %d) = %X ",i, f+i); // iterador i , endereco de memoria na posicao i do ponetiro
  }
  return 0;
}
