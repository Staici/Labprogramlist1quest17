#include <stdio.h>
#include <math.h>

int main(void) {
  int num;
  printf("Digite um número para que apareça seu módulo ");
  scanf("%d",&num);

  int modulo = fabs(num);
  printf("O módulo é: %d", modulo);

  return 0;
}