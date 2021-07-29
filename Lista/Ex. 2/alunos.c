#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    int numeroUSP;
    float mediaFinal;
}aluno;

void lerAlunos(aluno listaDeAlunos[]);
void avaliarAlunos(aluno listaDeAlunos[], aluno aprovados[], aluno reprovados[]);
void zeraListas(aluno listaDeAlunos[], aluno aprovados[], aluno reprovados[]);
void mostrarAlunos(aluno aprovados[], aluno reprovados[]);

int main(){
    aluno listaDeAlunos[10];
    aluno aprovados[10];
    aluno reprovados[10];
    zeraListas(listaDeAlunos,aprovados,reprovados);
    lerAlunos(listaDeAlunos);
    avaliarAlunos(listaDeAlunos,aprovados,reprovados);
    mostrarAlunos(aprovados,reprovados);
}

void zeraListas(aluno listaDeAlunos[], aluno aprovados[], aluno reprovados[]){
    for(int i = 0; i < 10; i++){
        strcpy(listaDeAlunos[i].nome,"");
        strcpy(aprovados[i].nome,"");
        strcpy(reprovados[i].nome,"");
        listaDeAlunos[i].numeroUSP = -1;
        aprovados[i].numeroUSP = -1;
        reprovados[i].numeroUSP = -1;
        listaDeAlunos[i].mediaFinal = -1;
        aprovados[i].mediaFinal = -1;
        reprovados[i].mediaFinal = -1;
    }
}

void lerAlunos(aluno listaDeAlunos[]){
    for(int i = 0; i < 10; i++){
        printf("\e[H\e[2J");
        printf("\n-=-=-=-= Aluno %d -=-=-=-=\n",i+1);
        printf("Nome: ");
        setbuf(stdin, 0);
        fgets(listaDeAlunos[i].nome,49,stdin);
        listaDeAlunos[i].nome[strcspn(listaDeAlunos[i].nome, "\n")] = 0;
        printf("Número USP: ");
        scanf("%d",&listaDeAlunos[i].numeroUSP);
        printf("Média Final: ");
        scanf("%f",&listaDeAlunos[i].mediaFinal);
    }
}

void avaliarAlunos(aluno listaDeAlunos[], aluno aprovados[], aluno reprovados[]){
    for(int i = 0; i < 10; i++){
        if(listaDeAlunos[i].mediaFinal < 5)
            reprovados[i] = listaDeAlunos[i];
        else
            aprovados[i] = listaDeAlunos[i];
    }
}

void mostrarAlunos(aluno aprovados[], aluno reprovados[]){
    printf("\n#########");
    printf("\nAPROVADOS");
    printf("\n#########\n");
    for(int i = 0; i < 10; i++)
        if(aprovados[i].numeroUSP != -1)
            printf("%d > %.2f > %s\n",aprovados[i].numeroUSP,aprovados[i].mediaFinal,aprovados[i].nome);
    printf("\n##########");
    printf("\nREPROVADOS");
    printf("\n##########\n");
    for(int i = 0; i < 10; i++)
        if(reprovados[i].numeroUSP != -1)
            printf("%d > %.2f > %s\n",reprovados[i].numeroUSP,reprovados[i].mediaFinal,reprovados[i].nome);
    
}