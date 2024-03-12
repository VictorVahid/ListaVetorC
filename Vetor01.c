#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "");

  int numeros[51];

  for (int i = 0; i <= 50; i++) {
    numeros[i] = i;
  }

  for (int i = 0; i <= 50; i++) {
    printf("%d\n", numeros[i]);
  }

  return 0;
}
