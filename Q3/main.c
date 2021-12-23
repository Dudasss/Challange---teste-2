/*Contrua struct aluno com nome, matricula e curso.
Leia do user a info de 5 alunos e imprima na tela.*/
#include <stdio.h>

typedef  struct {
  char nome[40];
  char curso[40];
  int matricula;
}aluno; //declarando struct

int pos = 0;

void cadastrar_aluno(aluno *novo_aluno);

int main(void) {
    int i;
    aluno student[5];
    for(i=0; i<5;i++){
	 	  cadastrar_aluno(student);
    }
    for(i=0; i<5;i++){
	    printf("Nome: %s\nCurso: %s\nMatricula: %d\n",  student[i].nome,student[i].curso,student[i].matricula);
   }
}

void cadastrar_aluno(aluno *novo_aluno){
    
    printf("Nome aluno:\n");
    scanf("%s", novo_aluno[pos].nome);
   
    printf("Nome do curso:\n");
    scanf("%s", novo_aluno[pos].curso);
    novo_aluno[pos].matricula = pos;
    printf("\n\n");
    /*printf("Nome: %s\nCurso: %s\nMatricula: %d\n",  novo_aluno[pos].nome,novo_aluno[pos].curso,novo_aluno[pos].matricula);*/
    pos++;
}