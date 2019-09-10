#ifndef _CLIENTE_
#define _CLIENTE_
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "Pedido.hpp"

using namespace std;

class Cliente
{
private:
    string endereco;
    string telefone;
    string email;
    vector<Pedido *> *pedidos;

public:
    Cliente(string end, string tel, string email);
    ~Cliente();

    void setEmail(string email);
    string getEmail();
    void setTelefone(string telefone);
    string getTelefone();
    void setEndereco(string endereco);
    string getEndereco();

    void adicionarPedido(Pedido *pedido);
    vector<Pedido *> *getPedidos();
};

#endif
