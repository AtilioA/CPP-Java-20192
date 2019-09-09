#include <iostream>
#include <string>
#include <vector>
#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Pedido.hpp"
#include "ItemDePedido.hpp"
#include "Produto.hpp"

int Produto::qtdProdutos = 0;
int Pedido::qtdPedidos = 0;

int main()
{
    Cliente *cli;
    Funcionario *fun;
    Pedido *ped;
    Produto *prod;
    vector<ItemDePedido *> itemPed;

    cout << "Testando inicializacao de objetos.\n" << endl;

    cli = new Cliente("Tiaguin", "168", "59", "rua", "777", "_battlenet");
    cli->setNome("Renan");
    prod = new Produto(2832, "V5", "gel", 10);
    prod->setNome("docin");
    prod->setCodigo(2832);
    fun = new Funcionario("Tiaguin", "2832", "168", "59", "rua", "777", "_battlenet");
    fun->setNome("Tiaguin");

    // itemPed = new vector<ItemDePedido *>;
    ped = new Pedido(fun, itemPed, "Aguardando");
    cli->adicionarPedido(ped);

    cout << "Funcionario encarregado pelo primeiro pedido do cliente " << cli->getNome() << ": " << cli->getPedidos()->at(0)->getFuncionario()->getNome() << endl;

    cout << "\nDeletando objetos..." << endl;
    delete cli;
    delete fun;

    return 0;
}
