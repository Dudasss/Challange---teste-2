/*Faça um programa que leia os dados de 10 alunos com nome matrícula média final, armazenando em um vetor uma vez os dados devido esses dados em dois novos vetores o vetor dos aprovados e o vetor dos aprovados média 5*/
#include <stdio.h>

typedef  struct {
  char nome[40];
  int matricula;
  int nota[3];
  int media_final;
}aluno; //declarando struct

int pos = 0;

void cadastrar_aluno(aluno *novo_aluno);
void media_aluno(aluno *novo_aluno);

int main(void) {
    int i;
    
    aluno student[3];
    for(i=0; i<3;i++){
	 	  cadastrar_aluno(student);
    }
    for(i=0; i<3;i++){
	    printf("Nome: %s\nMatricula: %d\n",  student[i].nome, student[i].matricula);
   }
   
   media_aluno(student);
   
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

void media_aluno(aluno *novo_aluno){
  int i, j, soma[3], media[3];
  int apro[3], repro[3];
  for(i=0; i<3; i++){
    soma[i]= (novo_aluno[i].nota[0]+novo_aluno[i].nota[1]+novo_aluno[i].nota[2]);
    //printf("Soma: %d\n", soma[i]);
    media[i]=soma[i]/3;
    //printf("Media: %d\n", media[i]);
    novo_aluno[i].media_final=media[i];
    //printf("Media: %d\n", novo_aluno[i].media_final);
    if(novo_aluno[i].media_final>4){
      apro[i]= novo_aluno[i].media_final;
      printf("%s Aprovada/o: %d\n", novo_aluno[i].nome, apro[i]);}
    if(novo_aluno[i].media_final<5){
      repro[i]=novo_aluno[i].media_final;
      printf("%s Reprovada/o: %d\n",novo_aluno[i].nome, repro[i]);}
  }
}