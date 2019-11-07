#include <stdlib.h>
#include <stdio.h>
#include "banco.h"
#include "gerenciaClientes.h"


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
    int escolha = 0;

    while(escolha != 9){
        menuPrincipal();
        scanf("%i", &escolha);

        switch(escolha){
            case 1:
                adicionarCliente(&clientes[totalClientes]);
                break;
            case 2:
                adicionarConta(&contas[numeroConta]);
                break;
            case 3:
                listarClientes();
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                break;


        }
    }
}

