#include "Produto.hpp"

Produto::Produto(int codigo, string nome, string descricao, int qtd)
{
    this->setCodigo(codigo);
    this->setNome(nome);
    this->setDescricao(descricao);
    this->setQtdEstoque(qtd);

    this->qtdProdutos++;
    cout << "Produto criado." << endl;
}

Produto::~Produto()
{
    Produto::qtdProdutos--;
    cout << "Produto deletado." << endl;
}

int Produto::getCodigo()
{
    return this->codigo;
}

void Produto::setCodigo(int codigo)
{
    this->codigo = codigo;
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
