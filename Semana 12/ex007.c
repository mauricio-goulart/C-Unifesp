#include <stdio.h>
#include <string.h>

int main(){
  char palavra[30],original[30];

  printf("Palavra: ");
  fgets(palavra,sizeof(palavra),stdin);
  palavra[strlen(palavra)-1] = '\0';

  original = palavra; //atribui o endereço de memória de palavra para original

  printf("Endereço de memória de palavra: %p\n",palavra);
  printf("Endereço de memória de original: %p\n",original);

  printf("Conteúdo de palavra: %s\n",palavra);
  printf("Conteúdo de original: %s\n",original);

  palavra[0] = 'X'; //modifica a primeira letra de palavra

  printf("Conteúdo de palavra após a modificação: %s\n",palavra);
  printf("Conteúdo de original após a modificação: %s\n",original);

  return 0;
}
