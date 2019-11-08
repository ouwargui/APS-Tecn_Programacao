#include "banco.h"

void adicionarConta(TConta *conta){
    TData datas[10];
    conta[numeroConta].numero = numeroConta;

    printf("Digite o dia de criação da conta: ");
    scanf("%i", &datas[numeroConta].dia);
    printf("Digite o mês de criação da conta: ");
    scanf("%i", &datas[numeroConta].mes);
    printf("Digite o ano de criação da conta: ");
    scanf("%i", &datas[numeroConta].ano);

    int numTemp = 0;
    printf("Digite o numero do cliente: ");
    scanf("%i", &numTemp);

    conta[numeroConta].cliente = clientes[numTemp];

    conta[numeroConta].dataAbertura = datas[numeroConta];

    conta[numeroConta].saldo = 1000;
    conta[numeroConta].ativa = 1;
}

char* listarContas(){
}
char* pesquisarConta(int numero){
}
TConta getConta(int numero){
}
int removerConta(int numero){
}
