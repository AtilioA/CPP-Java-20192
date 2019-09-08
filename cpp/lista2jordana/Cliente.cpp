#include "Cliente.hpp"

Cliente::Cliente()
{
    this->pedidos = new vector<Pedido *>;
    cout << "Cliente criado." << endl;
}

Cliente::~Cliente()
{
    int tamPedidos = this->pedidos->size();
    for (int i = 0; i < tamPedidos; i++)
    {
        delete this->pedidos->at(i);
    }
    delete this->pedidos;

    cout << "Cliente deletado." << endl;
}

string Cliente::getNome()
{
    return this->nome;
}

void Cliente::setNome(string nome)
{
    this->nome = nome;
}

tm Cliente::getDataNascimento()
{
    return this->dataNascimento;
}

void Cliente::setDataNascimento(tm dataNas)
{
    this->dataNascimento = dataNas;
}

string Cliente::getRG()
{
    return this->RG;
}

void Cliente::setRG(string RG)
{
    this->RG = RG;
}

string Cliente::getCPF()
{
    return this->CPF;
}

void Cliente::setCPF(string CPF)
{
    this->CPF = CPF;
}

string Cliente::getEndereco()
{
    return this->endereco;
}

void Cliente::setEndereco(string endereco)
{
    this->endereco = endereco;
}

string Cliente::getTelefone()
{
    return this->telefone;
}

void Cliente::setTelefone(string telefone)
{
    this->telefone = telefone;
}

string Cliente::getEmail()
{
    return this->email;
}

void Cliente::setEmail(string email)
{
    this->email = email;
}

vector<Pedido *> *Cliente::getPedidos()
{
    return this->pedidos;
}

void Cliente::adicionarPedido(Pedido *ped)
{
    this->pedidos->push_back(ped);
}
