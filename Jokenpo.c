#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  
  printf("Bem vindo(a) ao Jokenpô");
  int Usuario, maquina, r;
  
  srand(time(NULL));
  
  printf("Escolha: \nPedra[1]\n \npapel[2]\n \ntesoura[3]\n ");
  scanf("%d", &Usuario);
  
  maquina = rand() % 4;// sorteia um número de 0 a 2
  
  printf("A maquina escolheu %d\n", maquina);
  printf("Voce escolheu %d\n", Usuario);
  r= maquina-Usuario;

  if(r==0){
    printf("Empate");
  }
  else if(r==1){
      printf("Voce ganhou!");
    }
    else{
        printf("O computador ganhou");
    }
  
  return 0;
}