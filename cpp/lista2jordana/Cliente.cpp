#include "Cliente.hpp"

Cliente::Cliente(string nome, string RG, string CPF, string end, string tel, string email)
{
    this->pedidos = new vector<Pedido *>;

    this->setEndereco(end);
    this->setTelefone(tel);
    this->setEmail(email);

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
