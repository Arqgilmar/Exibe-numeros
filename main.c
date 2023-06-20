#include <stdio.h>

//Elabore um algoritmo que receba dois números e exibe todos os números entre eles

int main(void) {

  int n1, n2;
  
  printf("Digite um número:\n");
  scanf("%d", &n1);
  printf("Digite outro número:\n");
  scanf("%d", &n2);

  while(n1 <= n2){
  printf("%d\n", n1); 
  n1 = n1 + 1;
  }
  return 0;
}
