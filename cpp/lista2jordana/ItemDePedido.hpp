#ifndef _ItemDePedido_
#define _ItemDePedido_
#include <iostream>
#include <string>
// #include <vector>
// #include <ctime>
#include "Produto.hpp"

using namespace std;

class ItemDePedido
{
private:
    int quantidade;
    float precoVenda;
    Produto *produto;

public:
    ItemDePedido(Produto *produto);
    ~ItemDePedido();

    int getQuantidade();
    void setQuantidade(int quantidade);
    float getPrecoVenda();
    void setPrecoVenda(float precoVenda);
    Produto *getProduto();
};

#endif
