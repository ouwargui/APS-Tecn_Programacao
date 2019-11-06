#ifndef GERENCIACLIENTES_H_INCLUDED
#define GERENCIACLIENTES_H_INCLUDED
#include "cliente.h"

TCliente clientes[10];
int totalClientes = 0;

void adicionarCliente(TCliente cliente);
int existeCPF(TCliente cliente);
char* listarClientes();

#endif // GERENCIACLIENTES_H_INCLUDED
