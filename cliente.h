#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

typedef struct Cliente{
char nome[10];
char cpf[15];
char telefone[15];
}TCliente;

void imprimirCliente(TCliente *cliente);
#endif // CLIENTE_H_INCLUDED
