/*Implemente uma struct que leia o nome, a idade e o endereço de uma pessoa.*/
#include <stdio.h>

typedef  struct {
  char nome[40];
  int idade;
}id; //declarando struct
typedef struct {
  id morador;
  char rua[60];
  char bairro[60];
  char cidade[60];
  char estado[60];
}endereço; //declarando struct

void gerar_endereço(endereço novo_end);

int main(void) {

    endereço new_adress;
    gerar_endereço(new_adress);


  return 0;
}

void gerar_endereço(endereço novo_end){

    
    printf("Nome:\n");
    scanf("%[^\n]", novo_end.morador.nome);
   
    printf("Idade:\n");
    scanf("%d", &novo_end.morador.idade);


    printf("Nome da rua:\n");
    scanf("%s", novo_end.rua);

    printf("Nome do bairro:\n");
    scanf("%s", novo_end.bairro);
 
    printf("Nome da cidade:\n");
    scanf("%s", novo_end.cidade);
  
    printf("Nome do estado:\n");
    scanf("%s", novo_end.estado);
    

    printf("Nome: %s\n", novo_end.morador.nome);
    
    printf("Idade: %d\n", novo_end.morador.idade);
    fflush(stdin); //limpando buffer

    printf("Rua: %s \nBairro: %s \nCidade: %s \nEsatdo: %s",novo_end.rua, novo_end.bairro,novo_end.cidade,novo_end.estado);
    
}