#include "gerenciaClientes.h"
#include <stdio.h>
#include <string.h>

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
        printf("J� existe um cliente cadastrado com este CPF.\n\n");
        printf("Digite outro CPF: \n");
        gets(cpfTemp);
        strcpy(cliente[totalClientes].cpf, cpfTemp);
    }

    printf("Digite seu telefone: ");
    gets(telefoneTemp);
    fflush(stdin);

    strcpy(cliente[totalClientes].nome, nomeTemp);
    strcpy(cliente[totalClientes].telefone, telefoneTemp);

    totalClientes++;
    printf("%i", totalClientes);
    printf("Cliente cadastrado com sucesso!\n\n");
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
        printf("N�o existem clientes cadastrados.\n\n");
    }else{
        for(int a = 0; a < totalClientes; a++){
            printf("\n======= %i =======\n", (a + 1));
            printf("nome - %s \n", clientes[a].nome);
            printf("CPF: %s\n", clientes[a].cpf);
            printf("Telefone: %s\n", clientes[a].telefone);
            printf("=================\n", a);
        }
    }
    return clientes;
}
