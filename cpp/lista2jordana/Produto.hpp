#include <iostream>
#include <string>

class Produto
{
    private:
        int codigo;
        string nome;
        string descricao;
        int qtdEstoque;
        int precoBase;
        static int qtdProdutos;

    public:
        ~Produto();
        Produto();

        int getCodigo();
        void setCodigo(int codigo);
        string getNome();
        void setNome(string nome);
        string getDescricao();
        void setDescricao(string descricao);
        int getQtdEstoque();
        void setQtdEstoque(int qtdEstoque);
        int getPrecoBase();
        void setPrecoBase(int precoBase);
        int getQtdProdutos();
        void setQtdProdutos(int qtdProdutos);
};
