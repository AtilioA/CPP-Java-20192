#include "Produto.hpp"

Produto::Produto()
{
    this->qtdProdutos++;
    cout << "Produto criado." << endl;
}

Produto::~Produto()
{
    Produto::qtdProdutos--;
    cout << "Produto deletado." << endl;
}

string Produto::getNome()
{
    return this->nome;
}

void Produto::setNome(string nome)
{
    this->nome = nome;
}

string Produto::getDescricao()
{
    return this->descricao;
}

void Produto::setDescricao(string descricao)
{
    this->descricao = descricao;
}

int Produto::getQtdEstoque()
{
    return this->qtdEstoque;
}

void Produto::setQtdEstoque(int qtdEstoque)
{
    this->qtdEstoque = qtdEstoque;
}

int Produto::getPrecoBase()
{
    return this->precoBase;
}

void Produto::setPrecoBase(float precoBase)
{
    this->precoBase = precoBase;
}
