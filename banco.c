#include "banco.h"
#include "gerenciaClientes.h"

void adicionarConta(TConta *conta){
    TData datas[10];
    conta[numeroConta].numero = numeroConta;

    printf("Digite o dia de cria��o da conta: ");
    scanf("%i", &datas[numeroConta].dia);
    printf("Digite o m�s de cria��o da conta: ");
    scanf("%i", &datas[numeroConta].mes);
    while(datas[numeroConta].mes < 1 || datas[numeroConta].mes > 12){
        printf("M�s inv�lido, digite novamente: ");
        scanf("%i", &datas[numeroConta].mes);
    }
    printf("Digite o ano de cria��o da conta: ");
    scanf("%i", &datas[numeroConta].ano);

    int numTemp = 0;
    printf("Digite o numero do cliente: ");
    scanf("%i", &numTemp);

    while(numTemp > totalClientes){
        printf("Este cliente n�o existe, digite novamente: ");
        scanf("%i", &numTemp);
    }

    conta[numeroConta].cliente = clientes[numTemp];

    conta[numeroConta].dataAbertura = datas[numeroConta];

    conta[numeroConta].saldo = 1000;
    conta[numeroConta].ativa = 1;
    numeroConta++;
}

char* listarContas(){
    //if(numeroConta == 0)
}
char* pesquisarConta(int numero){
}
TConta getConta(int numero){
}
int removerConta(int numero){
}
