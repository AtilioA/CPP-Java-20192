#include "ItemDePedido.hpp"

ItemDePedido::ItemDePedido(Produto *produto)
{
    this->produto = produto;
    cout << "Item de pedido criado." << endl;
}

ItemDePedido::~ItemDePedido()
{
    delete this->produto;
    cout << "Item de pedido deletado." << endl;
}

int ItemDePedido::getQuantidade()
{
    return this->quantidade;
}

void ItemDePedido::setQuantidade(int quantidade)
{
    this->quantidade = quantidade;
}

float ItemDePedido::getPrecoVenda()
{
    return this->precoVenda;
}

void ItemDePedido::setPrecoVenda(float precoVenda)
{
    this->precoVenda = precoVenda;
}

Produto *ItemDePedido::getProduto()
{
    return this->produto;
}
