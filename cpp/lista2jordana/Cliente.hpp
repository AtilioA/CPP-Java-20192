#ifndef _CLIENTE_
#define _CLIENTE_
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "Pedido.hpp"

using namespace std;

class Cliente
{
private:
    string nome;
    tm dataNascimento;
    string RG;
    string CPF;
    string endereco;
    string telefone;
    string email;
    vector<Pedido *> *pedidos;

public:
    Cliente();
    ~Cliente();

    string getNome();
    void setNome(string nome);
    tm getDataNascimento();
    void setDataNascimento(tm dataNascimento);
    string getRG();
    void setRG(string RG);
    void setEmail(string email);
    string getEmail();
    void setTelefone(string telefone);
    string getTelefone();
    void setEndereco(string endereco);
    string getEndereco();
    void setCPF(string CPF);
    string getCPF();
    vector<Pedido *> *getPedidos();
    void adicionarPedido(Pedido *pedido);
};

#endif
