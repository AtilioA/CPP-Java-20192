#include <iostream>

class ItemDePedido
{
    private:
        int quantidade;
        float precoVenda;

    public:
        ~ItemDePedido();
        ItemDePedido();

        int getQuantidade();
        void setQuantidade(int quantidade);
        float getPrecoVenda();
        void setPrecoVenda(float precoVenda);
};
