#include <stdlib.h>
#include <stdio.h>
#include "banco.h"
#include <locale.h>

//OI JULIA SOU EU O GUILHERME CARAIIIIIII ALEK PARA DE RIR PORRA CARAIIII


void menuPrincipal(){
    printf("=== Menu do Banco ===\n");
    printf("1 - Cadastrar Cliente\n");
    printf("2 - Cadastrar Conta\n");
    printf("3 - Listar Conta\n");
    printf("4 - Pesquisar Conta\n");
    printf("5 - Depositar\n");
    printf("6 - Debitar (Sacar)\n");
    printf("7 - Transferir\n");
    printf("8 - Remover Conta\n");
    printf("9 - Sair\n");
}

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int escolha = 0, numero = 0;

    while(escolha != 9){
        menuPrincipal();
        scanf("%i", &escolha);

        switch(escolha){
            case 1:
                //printf("\n%i\n", totalClientes);
                adicionarCliente(&clientes[totalClientes]);
                listarClientes();
                printf("\n");
                break;
            case 2:
                adicionarConta(&contas[numeroConta]);
                printf("Conta Nº %i cadastrada com sucesso!\n\n\n", numeroConta);
                break;
            case 3:
                listarContas();
                break;
            case 4:
                printf("Digite um número: ");
                scanf("%i", &numero);
                pesquisarConta(numero);
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                removerConta(&contas[numeroConta]);
                break;
        }
    }
}

//cliente
void imprimirCliente(TCliente *cliente){
    printf("\n======= %i =======\n", totalClientes);
    printf("nome - %s\n", cliente[totalClientes].nome);
    printf("CPF: %s\n", cliente[totalClientes].cpf);
    printf("Telefone: %s\n", cliente[totalClientes].telefone);
    printf("=================\n");
}

//gerenciaClientes
void adicionarCliente(TCliente *cliente){
    char nomeTemp[10];
    char cpfTemp[15];
    char telefoneTemp[10];

    fflush(stdin);
    printf("Digite seu nome: ");
    gets(nomeTemp);
    fflush(stdin);
    printf("Digite seu CPF: ");
    gets(cpfTemp);
    fflush(stdin);

    strcpy(cliente[totalClientes].cpf, cpfTemp);

    while(existeCPF(cliente[totalClientes].cpf) == 1){
        printf("Já existe um cliente cadastrado com este CPF.\n\n");
        printf("Digite outro CPF: \n");
        gets(cpfTemp);
        strcpy(cliente[totalClientes].cpf, cpfTemp);
        fflush(stdin);
    }

    printf("Digite seu telefone: ");
    gets(telefoneTemp);
    fflush(stdin);

    strcpy(cliente[totalClientes].nome, nomeTemp);
    strcpy(cliente[totalClientes].telefone, telefoneTemp);

    fflush(stdin);
    printf("Cliente cadastrado com sucesso!\n\n");
    printf("Nome: %s \n", cliente[totalClientes].nome);
    printf("CPF: %s \n", cliente[totalClientes].cpf);
    printf("Telefone: %s \n", cliente[totalClientes].telefone);
    totalClientes++;
}

int existeCPF(TCliente *cliente){
    int existe = 0;
    for(int j = 0; j < totalClientes; j++){
        if(strcmp(cliente, clientes[j].cpf) == 0){
             existe = 1;
            break;
        }
    }
    return existe;
}


char* listarClientes(){
    if(totalClientes == 0){
        printf("Não existem clientes cadastrados.\n\n");
    }else{
        for(int a = 0; a < 10; a++){
            printf("%i \n" , (a + 1));
            printf("Nome: %s \n", clientes[a].nome);
            printf("CPF: %s \n", clientes[a].cpf);
            printf("Telefone: %s \n", clientes[a].telefone);
            printf("=================\n");
        }
    }
    return clientes;
}


//conta
void depositar(TConta conta,float valor){
}
int debitar(TConta conta, float quantia){
}
int transferir(TConta origem, TConta destino, float quantia){
}
void imprimirConta(TConta conta){
}


void adicionarConta(TConta *conta){
    conta[numeroConta].numero = numeroConta;

    int numTemp = 0;

    printf("Digite o numero do cliente que deseja adicionar: ");
    scanf("%i", &numTemp);
    fflush(stdin);

    while(numTemp > totalClientes){
        printf("Numero invalido, digite novamente ");
        scanf("%i", &numTemp);
        fflush(stdin);
    }
    numTemp--;

    strcpy(conta[numeroConta].cliente.nome, clientes[numTemp].nome);
    strcpy(conta[numeroConta].cliente.cpf, clientes[numTemp].cpf);
    strcpy(conta[numeroConta].cliente.telefone, clientes[numTemp].telefone);

    printf("Digite o dia de criação da conta: ");
    scanf("%i", &conta[numeroConta].dataAbertura.dia);
    fflush(stdin);

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
            printf("Nome: %s\n", contas[a].cliente.nome);
            printf("CPF: %s\n", contas[a].cliente.cpf);
            printf("Telefone: %s\n\n", contas[a].cliente.telefone);

            printf("Data de abertura: %i / %i / %i \n", contas[a].dataAbertura.dia, contas[a].dataAbertura.mes, contas[a].dataAbertura.ano);
            printf("Saldo: R$ %.2f \n", contas[a].saldo);

            if(contas[a].ativa == 0){
            printf("Conta inativa!\n");
            }else{
                printf("Conta ativa!\n");
            }
            printf("=================\n\n");
        }
    }
    return contas;
}

char* pesquisarConta(int numero){
    numero--;
    printf("\n======= %i ========\n", numero);
    printf("Nome: %s\n", contas[numero].cliente.nome);
    printf("CPF: %s\n", contas[numero].cliente.cpf);
    printf("Telefone: %s\n", contas[numero].cliente.telefone);
    printf("\n");
    printf("Data de abertura: %i/%i/%i\n", contas[numero].dataAbertura.dia, contas[numero].dataAbertura.mes, contas[numero].dataAbertura.ano);
    printf("Saldo: R$%.2f\n", contas[numero].saldo);
    if(contas[numero].ativa == 0){
        printf("Conta inativa!\n");
    }else{
        printf("Conta ativa!\n");
    }
    printf("===============\n\n");

    return contas;
}
TConta getConta(int numero){
}
int removerConta(int numero){
    int remover = 0, i = 0;
    printf("Insira o numero da conta que desja excluir \n");
    scanf("%i", &numero);
        if (contas[numeroConta].saldo == 0);{
            for(int b = numero;b < totalClientes; b++){
                clientes[b] = clientes[b + 1];
                i--;
                remover = 1;
                break;
            }
        }
        /*else{
            printf("Para remover uma conta é necessário que ela esteja com o saldo zerado!\n");
        }*/

        return remover;
        }





