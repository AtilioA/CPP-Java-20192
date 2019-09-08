#ifndef _Pedido_
#define _Pedido_
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "Produto.hpp"
#include "Funcionario.hpp"
#include "ItemDePedido.hpp"

using namespace std;

class Pedido
{
private:
    float valorTotal;
    tm data;
    string status;
    string formaPgto;
    vector<ItemDePedido *> *itens;
    Funcionario *funcionario;

public:
    static int qtdPedidos;
    Pedido(Funcionario *fun, ItemDePedido *ped);
    ~Pedido();

    float getValorTotal();
    void setValorTotal(float valorTotal);
    tm getData();
    void setData(tm data);
    string getStatus();
    void setStatus(string status);
    string getFormaPgto();
    void setFormaPgto(string formaPgto);
    int getQtdPedidos();
    void setQtdPedidos(int qtdPedidos);
    void adicionarItens(ItemDePedido *ped);
    vector<ItemDePedido *> *getItensDePedido();
    Funcionario *getFuncionario();
};

#endif
