#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int numeroDado;
  int saida =1;

  srand(time(NULL));

  printf("O jogo começou!\n");
  
  while(saida){
    printf("Jogando o dado...\n");
    numeroDado = rand() % 6 + 1;
    printf("O número sorteado foi: %d\n", numeroDado);
    
    printf("Deseja continuar? \n0 - Não\n1 - Sim\nEscolha: ");
    scanf("%d", &saida);
  }
  
  printf("O jogo acabou!\n");
  
  return 0;
}