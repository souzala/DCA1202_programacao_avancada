#include <stdio.h>

int main() {
  int valor;
  int *p1;
  float temp;
  float *p2;
  char aux;
  char *nome = "Ponteiros";
  char *p3;
  int idade;
  int vetor[3];
  int *p4;
  int *p5;


  /* (a) */
  valor = 10;
  p1 = &valor; // p1 guarda o endereco de memoria de valor
  *p1 = 20; // o conteudo de p1, que eh o endereco de memoria sera 20
  printf("%d \n", valor); // 20

  /* (b) */
  temp = 26.5;
  p2 = &temp; // p2 guarda o endereco de memoria de temp
  *p2 = 29.0; // o conteudo de p2 sera 29.0
  printf("%.1f \n", temp); // 29.0

  /* (c) */
  p3 = &nome[0]; // p3 guarda o endereco de memoria da posicao 0
  aux = *p3; // aux recebe o conteudo de p3
  printf("%c \n", aux); // P

  /* (d) */
  p3 = &nome[4]; // p3 guarda o endereco de memoria da posicao 4
  aux = *p3; // aux recebe o conteudo de p3
  printf("%c \n", aux); // e

  /* (e) */
  p3 = nome; // p3 eh do tipo char (que tem tamanho de 1 byte) que guardara apenas o primeiro caractere da string nome
  printf("%c \n", *p3); // P

  /* (f) */
  p3 = p3 + 4; // p3 = P(posicao 0 de p3) + 4 (ira incrementar 4 bytes de "Ponteiros") = e
  printf("%c \n", *p3); // e

  /* (g) */
  p3--; // p3 = p3(e) menos um decremento que aponta para t
  printf("%c \n", *p3); // t

  /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor; // p4 ponteiro pra inteiro que guarda o primeiro elemento de vetor = 31
  idade = *p4; // idade recebe o conteudo de p4 = 31
  printf("%d \n", idade); // 31

  /* (i) */
  p5 = p4 + 1; // p5 recebe p4(31) mais um incremento que aponta para 45 que eh o proximo valor do vetor
  idade = *p5; // idade recebe o conteudo de p5 = 45
  printf("%d \n", idade); // 45

  /* (j) */
  p4 = p5 + 1; // p4 recebe p5(45) mais um incremento que aponta para 27 que eh o proximo valor do vetor
  idade = *p4; // idade recebe o conteudo de p4 = 27
  printf("%d \n", idade); // 27

  /* (l) */
  p4 = p4 - 2; // p4 recebe p4(27) menos dois decrementos voltando p a pposicao inicial com o valor 31
  idade = *p4; // idade recebe o conteudo de p4 = 27
  printf("%d \n", idade); // 31

  /* (m) */
  p5 = &vetor[2] - 1; // p5 recebe o vetor[27] menos um decremento que aponta para 45
  printf("%d \n", *p5); // 45

  /* (n) */
  p5++; // p5 recebe p5(45) mais um inremento que aponta para 27
  printf("%d \n", *p5); // 27
  return(0);
}
