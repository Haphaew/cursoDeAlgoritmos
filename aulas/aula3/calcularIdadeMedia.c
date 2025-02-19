#include <stdio.h>

int main() { 
  int rafael, pedro, mariaFernanda , ruanny;

  printf("Idade do Rafael: ");
  scanf("%d", &rafael);

  printf ("Idade do Pedro: ");
  scanf ("%d", &pedro);

  printf ("Idade da Maria Fernada: ");
  scanf ("%d", &mariaFernanda);

  printf ("Idade da Ruanny: ");
  scanf ("%d", &ruanny);

  float idadeMedia;
  idadeMedia = (rafael + pedro + mariaFernanda + ruanny) / 4.0;

  printf ("A idade média é: %.2f\n", idadeMedia);  

  return 0;
}