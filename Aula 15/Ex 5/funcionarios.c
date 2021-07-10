#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

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
void zerarDados(struct funcionario * f);
void alterarDados(struct funcionario * f);
int opcoes();
int is_number(char word[]);

int main(){
    int quantidadeDeRegistros = 2;
    int opcao, idParaSalvar;
    struct funcionario funcionarios[quantidadeDeRegistros];
    
    for(int i = 0; i < quantidadeDeRegistros; i++){
        funcionarios[i].id = i;
        zerarDados(&funcionarios[i]);
    }

    while(1){
        opcao = opcoes();
        if(opcao == 1){
            for(int i = 0; i < quantidadeDeRegistros; i++){
                if(funcionarios[i].idade == -1){
                    idParaSalvar = i;
                    break;
                }
                else if(i + 1 == quantidadeDeRegistros)
                    idParaSalvar = -1;
            }
            if(idParaSalvar == -1)
                printf("\nNão há espaço para inserir um novo registro!\n");
            else
                cadastrarFuncionario(&funcionarios[idParaSalvar]);
        }
        else if(opcao == 2){
            printf("=-=-=-=-=-=-=-=-=-= LISTA DE FUNCIONÁRIOS =-=-=-=-=-=-=-=-=-\n");
            for(int i = 0; i < quantidadeDeRegistros; i++){
                if(funcionarios[i].idade != -1){
                    mostrarFuncionario(&funcionarios[i]);
                    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
                }
            }
        }
        else if(opcao == 3){
            char stringDeBusca[50];
            printf("Digite o nome ou ID que deseja procurar: ");
            setbuf(stdin, 0);
            fgets(stringDeBusca,49,stdin);
            stringDeBusca[strcspn(stringDeBusca, "\n")] = 0;
            if(is_number(stringDeBusca)){
                if(atoi(stringDeBusca) > quantidadeDeRegistros || atoi(stringDeBusca) < 0)
                    printf("\nID fora dos limites, digite um número entre 0 e %d\n", quantidadeDeRegistros - 1);
                else if(funcionarios[atoi(stringDeBusca)].idade != -1)
                    mostrarFuncionario(&funcionarios[atoi(stringDeBusca)]);
                else
                    printf("\nID de usuário não encontrado!\n");
            }
            else
                for(int i = 0; i < quantidadeDeRegistros; i++){
                    if(!strcasecmp(stringDeBusca,funcionarios[i].nome)){
                        mostrarFuncionario(&funcionarios[i]);
                        break;
                    }
                    printf("\nNome não encontrado!\n");
                }
        }
        else if(opcao == 4){
            char stringDeBusca[50];
            printf("Digite o nome ou ID que deseja EXCLUIR: ");
            setbuf(stdin, 0);
            fgets(stringDeBusca,49,stdin);
            stringDeBusca[strcspn(stringDeBusca, "\n")] = 0;
            if(is_number(stringDeBusca)){
                if(atoi(stringDeBusca) > quantidadeDeRegistros || atoi(stringDeBusca) < 0)
                    printf("\nID fora dos limites, digite um número entre 0 e %d\n", quantidadeDeRegistros - 1);
                else if(funcionarios[atoi(stringDeBusca)].idade != -1){
                    zerarDados(&funcionarios[atoi(stringDeBusca)]);
                    printf("\nDados do funcionário %d apagados com sucesso!\n",atoi(stringDeBusca));
                }
                else
                    printf("\nID de usuário não encontrado!\n");
            }
            else
                for(int i = 0; i < quantidadeDeRegistros; i++){
                    if(!strcasecmp(stringDeBusca,funcionarios[i].nome)){
                        zerarDados(&funcionarios[i]);
                        printf("\nDados de %s apagados com sucesso!\n",stringDeBusca);
                        break;
                    }
                    printf("\nNome não encontrado!\n");
                }
        }
        else if(opcao == 5){
            char stringDeBusca[50];
            printf("Digite o nome ou ID que deseja editar: ");
            setbuf(stdin, 0);
            fgets(stringDeBusca,49,stdin);
            stringDeBusca[strcspn(stringDeBusca, "\n")] = 0;
            if(is_number(stringDeBusca)){
                if(atoi(stringDeBusca) > quantidadeDeRegistros || atoi(stringDeBusca) < 0)
                    printf("\nID fora dos limites, digite um número entre 0 e %d\n", quantidadeDeRegistros - 1);
                else if(funcionarios[atoi(stringDeBusca)].idade != -1)
                    alterarDados(&funcionarios[atoi(stringDeBusca)]);
                else
                    printf("\nID de usuário não encontrado!\n");
            }
            else
                for(int i = 0; i < quantidadeDeRegistros; i++){
                    if(!strcasecmp(stringDeBusca,funcionarios[i].nome)){
                        alterarDados(&funcionarios[i]);
                        break;
                    }
                    printf("\nNome não encontrado!\n");
                }
        }
        else if(opcao == 6)
            break; 
    }
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-= FIM =-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
}

void cadastrarFuncionario(struct funcionario * f){
    printf("=-=-=-=-=-=-=-=-= CADASTRO DE FUNCIONÁRIO =-=-=-=-=-=-=-=-=-\n");
    printf("Digite o nome do novo funcionário: ");
    setbuf(stdin, 0);
    fgets(f->nome,49,stdin);
    f->nome[strcspn(f->nome, "\n")] = 0;
    printf("Digite a idade do novo funcionário: ");
    scanf("%d", &f->idade);
    printf("Digite o telefone do novo funcionário: ");
    setbuf(stdin, 0);
    fgets(f->telefone,19,stdin);
    f->telefone[strcspn(f->telefone, "\n")] = 0;
    printf("Digite o cargo do novo funcionário: ");
    setbuf(stdin, 0);
    fgets(f->cargo,29,stdin);
    printf("Digite o salário do novo funcionário: ");
    f->cargo[strcspn(f->cargo, "\n")] = 0;
    scanf("%f", &f->salario);
    printf("Funcionário recebeu o ID de número %d!\n",f->id);
}

void mostrarFuncionario(struct funcionario * f){
    printf("ID: %d\n",f-> id);
    printf("Nome: %s\n",f-> nome);
    printf("Idade: %d anos\n",f-> idade);
    printf("Telefone: %s\n",f-> telefone);
    printf("Cargo: %s\n",f-> cargo);
    printf("Salário: R$%.2f\n",f-> salario);
}

void zerarDados(struct funcionario * f){
    strcpy(f->nome,"");
    f->idade = -1;
    strcpy(f->telefone,"");
    strcpy(f->cargo,"");
    f->salario = 0;
}

int opcoes(){
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-= MENU =-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    int opicao;
    printf("Digite uma opção!\n");
    printf("(1) Inserir um funcionário\n");
    printf("(2) Listar todos funcionários\n");
    printf("(3) Procurar funcionário por nome ou número\n");
    printf("(4) Excluir funcionário\n");
    printf("(5) Editar funcionário\n");
    printf("(6) Fechar sistema\n");
    printf("Escolha: ");
    scanf("%d",&opicao);
    return opicao;
}

void alterarDados(struct funcionario * f){
    printf("=-=-=-=-=-=-=- ALTERAR DADOS DE FUNCIONÁRIO -=-=-=-=-=-=-=-\n");
    printf("Nome -> De %s Para: ",f->nome);
    setbuf(stdin, 0);
    fgets(f->nome,49,stdin);
    f->nome[strcspn(f->nome, "\n")] = 0;
    printf("Idade -> De %d Para: ",f->idade);
    scanf("%d", &f->idade);
    printf("Telefone -> De %s Para: ", f->telefone);
    setbuf(stdin, 0);
    fgets(f->telefone,19,stdin);
    f->telefone[strcspn(f->telefone, "\n")] = 0;
    printf("Cargo -> De %s Para: ", f->cargo);
    setbuf(stdin, 0);
    fgets(f->cargo,29,stdin);
    f->cargo[strcspn(f->cargo, "\n")] = 0;
    printf("Salário -> De R$%.2f Para: ", f->salario);
    scanf("%f", &f->salario);
    printf("\nFuncionário alterado com sucesso!\n");
}


int is_number(char word[]){
    for(int i = 0; i < strlen(word); i++)
        if(!isdigit(word[i]) && word[i]!='\n')
            return 0;
    return 1;
}
