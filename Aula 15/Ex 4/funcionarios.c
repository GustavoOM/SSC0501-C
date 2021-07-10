#include <stdio.h>
#include <string.h>

struct funcionario{
    int id;
    char nome[50];
    int idade;
    char telefone[20];
    char cargo[30];
    float salario;
};

void cadastrarFuncionario(struct funcionario * f);
void mostrarFuncionario(struct funcionario * f);

int main(){
    struct funcionario funcionarios[100];
    int quantidadeDeRegistros = 3;
    printf("=-=-=-=-=-=-=-=-= CADASTRO DE FUNCIONÁRIOS =-=-=-=-=-=-=-=-=\n");
    for(int i = 0; i < quantidadeDeRegistros; i++){
        funcionarios[i].id = i;
        cadastrarFuncionario(&funcionarios[i]);
    }

    printf("=-=-=-=-=-=-=-=-=-= LISTA DE FUNCIONÁRIOS =-=-=-=-=-=-=-=-=-\n");
    for(int i = 0; i < quantidadeDeRegistros; i++)
        mostrarFuncionario(&funcionarios[i]);

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-= FIM =-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
}

void cadastrarFuncionario(struct funcionario * f){
    printf("Digite o nome do %dº funcionário: ",f->id+1);
    setbuf(stdin, 0);
    fgets(f->nome,49,stdin);
    printf("Digite a idade do %dº funcionário: ",f->id+1);
    scanf("%d", &f->idade);
    printf("Digite o telefone do %dº funcionário: ",f->id+1);
    setbuf(stdin, 0);
    fgets(f->telefone,19,stdin);
    printf("Digite o cargo do %dº funcionário: ",f->id+1);
    setbuf(stdin, 0);
    fgets(f->cargo,29,stdin);
    printf("Digite o salário do %dº funcionário: ",f->id+1);
    scanf("%f", &f->salario);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
}

void mostrarFuncionario(struct funcionario * f){
    printf("ID: %d\n",f-> id);
    printf("Nome: %s",f-> nome);
    printf("Idade: %d\n",f-> idade);
    printf("Telefone: %s",f-> telefone);
    printf("Cargo: %s",f-> cargo);
    printf("Salário: %f\n",f-> salario);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
}
