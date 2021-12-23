/*Crie uma estrutura representando os alunos de um determinado curso a estrutura deve conter: a matrícula do aluno, nome, nota da primeira prova segunda e terceira prova.
A permita ao usuário entrar com dados de cinco alunos.
Encontre o aluno com maior nota da primeira prova.
Encontre o aluno com maior média geral.
Encontre o aluno com menor média geral.
Para cada aluno diga se ele foi aprovado ou reprovado considerando o valor 6 para aprovação.*/
#include <stdio.h>

typedef  struct {
  char nome[40];
  int matricula;
  int nota[3];
}aluno; //declarando struct

int pos = 0;

void cadastrar_aluno(aluno *novo_aluno);
void maior_nota(aluno *novo_aluno);
void maior_menor_media(aluno *novo_aluno);

int main(void) {
    int i,j,media=0;
    
    aluno student[3];
    for(i=0; i<3;i++){
	 	  cadastrar_aluno(student);
    }
    for(i=0; i<3;i++){
	    printf("Nome: %s\nMatricula: %d\n",  student[i].nome, student[i].matricula);
      
      for(j=0; j<3;j++){
      
        printf("%d nota: %d\n",  j,student[i].nota[j]);
        media+=student[i].nota[j];
      }
        if(media/3>5)
          printf("Média = %d\nAprovado!!\n", media/3);
        if(media/3<6)
          printf("Média = %d\nReprovado!!\n", media/3);
        media=0;
   }
   maior_nota(student);
   maior_menor_media(student);
   
}

void cadastrar_aluno(aluno *novo_aluno){
    int i;
    printf("Nome aluno:\n");
    scanf("%s", novo_aluno[pos].nome);
   
    novo_aluno[pos].matricula = pos;
    //printf("\n\n");
    for(i=0; i<3;i++){
	    printf("%d nota: ", i);
      scanf("%d", &novo_aluno[pos].nota[i]);
    }
    pos++;
}
void maior_nota(aluno *novo_aluno){
  int a=0, i;
  a=novo_aluno[0].nota[0];
  for(i=1; i<3;i++){
    //printf("Nota P1: %d\n", novo_aluno[i].nota[0]);
    if(a<novo_aluno[i].nota[0])
      a=novo_aluno[i].nota[0];
      }
  printf("Maior nota da P1:%d\n", a);
}
void maior_menor_media(aluno *novo_aluno){
  int i, j, soma[3], media[3];
  int maior, menor;
  for(i=0; i<3; i++){
    soma[i]= (novo_aluno[i].nota[0]+novo_aluno[i].nota[1]+novo_aluno[i].nota[2]);
    //printf("Soma: %d\n", soma[i]);
    media[i]=soma[i]/3;
  }
  maior=menor=media[0];
  for(i=1; i<3; i++){
    if(maior<media[i])
      maior=media[i];
    if(menor>media[i])
      menor=media[i];
  }
  printf("Menor média: %d\n", menor);
  printf("Maior média: %d\n", maior);
}