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
  p3--; //
  printf("%c \n", *p3); // t

  /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("%d \n", idade);

  /* (i) */
  p5 = p4 + 1;
  idade = *p5;
  printf("%d \n", idade);

  /* (j) */
  p4 = p5 + 1;
  idade = *p4;
  printf("%d \n", idade);

  /* (l) */
  p4 = p4 - 2;
  idade = *p4;
  printf("%d \n", idade);

  /* (m) */
  p5 = &vetor[2] - 1;
  printf("%d \n", *p5);

  /* (n) */
  p5++;
  printf("%d \n", *p5);
  return(0);
}
