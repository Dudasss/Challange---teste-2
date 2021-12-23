/*Faça um programa que armazene em um registro de dados (estrutura composta) os dados de um funcionário de empresa compostas de: nome idade sexo CPF data de nascimento código do setor onde trabalha (0-99) cargo que ocupa(string[30]) e salário dados devem ser digitados pelo usuário mas nada na estrutura exibido na tela*/
#include <stdio.h>

typedef struct{
  char nome[30];
  int idade;
  char sexo;
  long int cpf;
  char bday[15];
}dados_pessoais;
typedef struct{
  char cargo[30];
  float salario;
  int cod_setor;
  dados_pessoais funcionario;
}job;


int pos = 0;

void cadastrar_funcionario(job *novo_func);
void listar_funcionario(job *novo_func);

int main(void) {
    int i,j;
    
    job colaborador[2];
    for(i=0; i<2;i++){
	 	  cadastrar_funcionario(colaborador);
    }
    listar_funcionario(colaborador);
   
}

void cadastrar_funcionario(job *novo_func){
    
    printf("Nome do funcionário:\n");
    scanf("%s", novo_func[pos].funcionario.nome);
    printf("Idade do funcionário:\n");
    scanf("%d", &novo_func[pos].funcionario.idade);
    printf("Sexo do funcionário: F para feminino e M para masculino\n");
    scanf("%s", &novo_func[pos].funcionario.sexo);
    printf("CPF do funcionário:\n");
    scanf("%ld", &novo_func[pos].funcionario.cpf);
    printf("Data de nascimento: formato(DD/MM/AA)\n");
    scanf("%s", novo_func[pos].funcionario.bday);
    printf("Código do setor:\n");
    scanf("%d", &novo_func[pos].cod_setor);
    printf("Cargo do funcionário:\n");
    scanf("%s", novo_func[pos].cargo);
    printf("Salario do funcionário:\n");
    scanf("%f", &novo_func[pos].salario);
    
    pos++;
}
void listar_funcionario(job *novo_func){
    int i;
    for(i=0; i<2; i++){
    printf("Nome do funcionário: %s\n", novo_func[i].funcionario.nome);
    printf("Idade do funcionário: %d\n",novo_func[i].funcionario.idade);
    printf("Sexo do funcionário: %s\n", &novo_func[i].funcionario.sexo);
    printf("CPF do funcionário: %ld\n", novo_func[i].funcionario.cpf);
    printf("Data de nascimento: %s\n",novo_func[i].funcionario.bday);
    printf("Código do setor: %d\n",novo_func[i].cod_setor);
    printf("Cargo do funcionário: %s\n",novo_func[i].cargo);
    printf("Salario do funcionário: %f\n",novo_func[i].salario);
    }
}