/*Faça um programa que realiza a leitura dos seguintes dados relativos a um conjunto de alunos: matrícula nome código da disciplina nota 1 nota 2. Considere uma turma de 10 alunos. Após de todos os dados digitados e depois de armazená-los em um vetor de estrutura exibir na tela a listagem final os alunos com suas respectivas médias  ponderadas com peso 1 nota 1 e peso2 nota2*/

#include <stdio.h>

typedef  struct {
  char nome[40];
  int matricula;
  int nota[2];
}aluno; //declarando struct

int pos = 0;

void cadastrar_aluno(aluno *novo_aluno);
void listar_aluno(aluno *novo_aluno);

int main(void) {
    
    int i;
    aluno student[3];
    for(i=0; i<3;i++){
	 	  cadastrar_aluno(student);
    }
    
	 	  listar_aluno(student);
      
  
}

void cadastrar_aluno(aluno *novo_aluno){
    int i;
    printf("Nome aluno:\n");
    scanf("%s", novo_aluno[pos].nome);
   
    novo_aluno[pos].matricula = pos;
    //printf("\n\n");
    for(i=0; i<2;i++){
	    printf("%d nota: ", i);
      scanf("%d", &novo_aluno[pos].nota[i]);
    }
    pos++;
}
void listar_aluno(aluno *novo_aluno){
  int i,j, media;
  for(i=0; i<3;i++){
	    printf("Nome: %s\nMatricula: %d\n",  novo_aluno[i].nome, novo_aluno[i].matricula);
      for(j=0; j<2; j++){
      printf("%d nota: %d\n",  j,novo_aluno[i].nota[j]);
      }
        media=(novo_aluno[i].nota[0]*1)+(novo_aluno[i].nota[1]*2);
      
      printf("Média = %d\n", media/2);
      media=0;
   }
}