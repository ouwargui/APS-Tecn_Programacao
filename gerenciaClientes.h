#ifndef GERENCIACLIENTES_H_INCLUDED
#define GERENCIACLIENTES_H_INCLUDED
#include "cliente.h"
#include <locale.h>

TCliente clientes[10];
static int totalClientes = 0;

void adicionarCliente(TCliente *cliente);
int existeCPF(TCliente *cliente);
char* listarClientes();

#endif // GERENCIACLIENTES_H_INCLUDED
