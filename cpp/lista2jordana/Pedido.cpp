#include <string.h>
#include "Pedido.hpp"

Pedido::Pedido(Funcionario *fun, vector<ItemDePedido *> ped, string formaPgto)
{
    this->setFuncionario(fun);
    this->setFormaPgto(formaPgto);

    this->itens = new vector<ItemDePedido *>;
    int qtdItens = ped.size();
    for (int i = 0; i < qtdItens; i++)
    {
        this->itens->push_back(ped[i]);

        if (ped[i]->getProduto()->getQtdEstoque() > 0)
        {
            if (formaPgto.compare("Aguardando") == 0)
            {
                this->setStatus("Pedido aguardando pagamento");
            }
            else
            {
                this->setStatus("Pedido registrado");
            }
        }
        else
        {
            this->setStatus("Pedido aguardando estoque");
        }
    }

    Pedido::qtdPedidos++;
    cout << "Novo pedido criado." << endl;
}

Pedido::~Pedido()
{
    int tamItens = this->itens->size();
    for (int i = 0; i < tamItens; i++)
    {
        delete this->itens->at(i);
    }
    delete this->itens;

    Pedido::qtdPedidos--;
    cout << "Pedido deletado." << endl;
}

float Pedido::getValorTotal()
{
    return this->valorTotal;
}

void Pedido::setValorTotal(float valorTotal)
{
    this->valorTotal = valorTotal;
}

tm Pedido::getData()
{
    return this->data;
}

void Pedido::setData(tm data)
{
    this->data = data;
}

string Pedido::getStatus()
{
    return this->status;
}

void Pedido::setStatus(string status)
{
    this->status = status;
}

string Pedido::getFormaPgto()
{
    return this->formaPgto;
}

void Pedido::setFormaPgto(string formaPgto)
{
    this->formaPgto = formaPgto;
}

int Pedido::getQtdPedidos()
{
    return this->qtdPedidos;
}

void Pedido::setQtdPedidos(int qtdPedidos)
{
    this->qtdPedidos = qtdPedidos;
}

void Pedido::adicionarItens(ItemDePedido *ped)
{
    this->itens->push_back(ped);
}

vector<ItemDePedido *> *Pedido::getItensDePedido()
{
    return this->itens;
}

void Pedido::setFuncionario(Funcionario *fun)
{
    this->funcionario = fun;
}

Funcionario *Pedido::getFuncionario()
{
    return this->funcionario;
}
