#include "gerenciaClientes.h"
#include <stdio.h>

void adicionarCliente(TCliente cliente){

    fflush(stdin);
    printf("Digite o nome do cliente: ");
    gets(cliente.nome);

    fflush(stdin);
    printf("Digite o CPF do cliente: ");
    gets(cliente.cpf);

    fflush(stdin);
    printf("Digite o telefone do cliente: ");
    gets(cliente.telefone);

    totalClientes++;
    printf("Cliente cadastrado com sucesso!");

}

int existeCPF(TCliente cliente){

}
char* listarClientes(){
    
}
