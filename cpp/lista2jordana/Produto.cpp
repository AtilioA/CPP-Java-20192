#include <iostream>

~Produto()
Produto()

void Produto::setCodigo(int codigo)
{
    this.codigo = codigo;
}

string Produto::getNome()
{
    return this.nome;
}

void Produto::setNome(string nome)
{
    this.nome = nome;
}

string Produto::getDescricao()
{
    return this.descricao;
}

void Produto::setDescricao(string descricao)
{
    this.descricao = descricao;
}

int Produto::getQtdEstoque()
{
    return this.qtdEstoque;
}

void Produto::setQtdEstoque(int qtdEstoque)
{
    this.qtdEstoque = qtdEstoque;
}

int Produto::getPrecoBase()
{
    return this.precoBase;
}

void Produto::setPrecoBase(int precoBase)
{
    this.precoBase = precoBase;
}

int Produto::getQtdProdutos()
{
    return this.qtdProdutos;
}

void Produto::setQtdProdutos(int qtdProdutos)
{
    this.qtdProdutos = qtdProdutos;
}
