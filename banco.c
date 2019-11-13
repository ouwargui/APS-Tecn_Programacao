#include "banco.h"
#include "gerenciaClientes.h"

void adicionarConta(TConta *conta){
    conta[numeroConta].numero = numeroConta;
    printf("\n\n%i\n\n", numeroConta);
    int numTemp = 0;
    printf("Digite o numero do cliente que deseja adicionar: ");
    scanf("%i", &numTemp);
    fflush(stdin);
    printf("%i\n", numTemp);
    printf("%i\n", totalClientes);
    while(numTemp >= totalClientes){
        printf("Numero invalido, digite novamente ");
        scanf("%i", &numTemp);
        fflush(stdin);
    }
    numTemp--;
    printf("\n\n%i\n\n", numeroConta);
    strcpy(conta[numeroConta].cliente.nome, clientes[numTemp].nome);
    strcpy(conta[numeroConta].cliente.cpf, clientes[numTemp].cpf);
    strcpy(conta[numeroConta].cliente.telefone, clientes[numTemp].telefone);
    printf("\n\n%i\n\n", numeroConta);
    printf("Digite o dia de criação da conta: ");
    scanf("%i", &conta[numeroConta].dataAbertura.dia);
    fflush(stdin);
    printf("\n\n%i\n\n", numeroConta);
    printf("Digite o mês de criação da conta: ");
    scanf("%i", &conta[numeroConta].dataAbertura.mes);
    fflush(stdin);
    while(conta[numeroConta].dataAbertura.mes < 1 || conta[numeroConta].dataAbertura.mes > 12){
        printf("Mês inválido, digite novamente: ");
        scanf("%i", &conta[numeroConta].dataAbertura.mes);
        fflush(stdin);
    }
    printf("Digite o ano de criação da conta: ");
    scanf("%i", &conta[numeroConta].dataAbertura.ano);
    fflush(stdin);

    conta[numeroConta].cliente = clientes[numTemp];
    conta[numeroConta].saldo = 1000;
    conta[numeroConta].ativa = 1;
    numeroConta++;
}

char* listarContas(){
    if(numeroConta == 0){
        printf("Não existem contas cadastradas.\n\n");
    }else{
        for(int a = 0; a < numeroConta; a++){
            printf("\n======= %i =======\n", (a + 1));
            printf("nome - %s \n", contas[a].cliente.nome);
            printf("CPF: %s\n", contas[a].cliente.cpf);
            printf("Telefone: %s\n\n", contas[a].cliente.telefone);

            printf("Data de abertura: %i / %i / %i \n", contas[a].dataAbertura.dia, contas[a].dataAbertura.mes, contas[a].dataAbertura.ano);
            printf("Saldo: R$ %.2f \n", contas[a].saldo);
            printf("Ativa: %i \n", contas[a].ativa);
            printf("=================\n", a);

        }
    }
    return contas;
}
char* pesquisarConta(int numero){
}
TConta getConta(int numero){
}
int removerConta(int numero){
}
