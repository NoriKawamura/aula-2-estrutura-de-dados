#include <stdio.h>
#include <locale.h>

int main(void) {
 int a = 5;
 int b = 2;

  int divisao = a / b; //divisão inteira
  int resto = a % b; // resto da divisão

  printf("a divisão de %d e %d = %d", a, b, divisao);
  printf("\n o resto da divisão de %d e %d = %d",a, b, resto);
}