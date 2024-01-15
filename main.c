/*Digite um nome e retorne quantas caracteres tem esse nome*/

#include <stdio.h>
#include <string.h>
#define TAM 100
#define gets(a)fgets(a,sizeof(a),stdin);a[strcspn(a,"\n")]='\0';

int main(void) {
  int i;
  char nome[TAM];
  
  printf("Digite Seu Nome:");
  gets(nome);

  int tam = strlen(nome);
  int contNome=0;
  for(i=0;i<tam;i++){
    if((nome[i] >= 65) && (nome[i] <= 90)){
       contNome++;
    }
    else if((nome[i] >= 97) && (nome[i] <= 122)){
      contNome++;
    }
  } 
  printf("o Nome: %s \nTem %d letras",nome,contNome);
  return 0;
}