#ifndef _Produto_
#define _Produto_
#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

class Produto
{
private:
    int codigo;
    string nome;
    string descricao;
    int qtdEstoque;
    float precoBase;

public:
    static int qtdProdutos;
    Produto(int codigo, string nome, string descricao, int qtd);
    ~Produto();

    int getCodigo();
    void setCodigo(int codigo);
    string getNome();
    void setNome(string nome);
    string getDescricao();
    void setDescricao(string descricao);
    int getQtdEstoque();
    void setQtdEstoque(int qtdEstoque);
    int getPrecoBase();
    void setPrecoBase(float precoBase);
};

#endif
