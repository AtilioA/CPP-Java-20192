#include "Transacao.hpp"

Transacao::Transacao(tm data, float valor, string descricao)
{
    this->setData(data);
    this->setValor(valor);
    this->setDescricao(descricao);
}

Transacao::~Transacao()
{

}

tm Transacao::getData()
{
    return this->data;
}

void Transacao::setData(tm data)
{
    this->data = data;
}

float Transacao::getValor()
{
    return this->valor;
}

void Transacao::setValor(float valor)
{
    this->valor = valor;
}

string Transacao::getDescricao()
{
    return this->descricao;
}

void Transacao::setDescricao(string descricao)
{
    this->descricao = descricao;
}
