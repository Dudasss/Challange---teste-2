/*Utilizando struct, entre 5 nomes, endereços e telefones e os imprima em ordem alfabetica.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
  char nome[30];
  char endereço[30];
  long int telefone;
}pessoa;


int pos = 0;

void cadastrar_pessoa(pessoa *nova_p);
void ordena(pessoa *nova_p);

int main(void) {
    int i=0;
    pessoa info[2];
    for(i=0; i<2; i++){
	 	  cadastrar_pessoa(info);
    }
    ordena(info);
    for(i=0; i<2; i++){
	 	  puts(info[i].nome);
    }
}

void cadastrar_pessoa(pessoa *nova_p){
    printf("Nome:\n");
    scanf("%s", nova_p[pos].nome);
    printf("Endereço:\n");
    scanf("%s", nova_p[pos].endereço);
    printf("Telefone:\n");
    scanf("%ld", &nova_p[pos].telefone);
    pos++;
}
void ordena(pessoa *nova_p){
    int i, j, r;
    char aux[30];
    for(i=0; i<2; i++){
      for(j=0; j<2; i++){
        r = strcmp(&nova_p[pos].nome[i],&nova_p[pos].nome[j]);
        if(r>0){
        strcpy(aux, &nova_p[pos].nome[i]);
        strcpy(&nova_p[pos].nome[i],&nova_p[pos].nome[j]);
        strcpy(&nova_p[pos].nome[j],aux);}
      }
    }
}