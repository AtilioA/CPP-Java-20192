#include <iostream>
#include <string>

class Pedido
{
    private:
        float valorTotal;
        Date data;
        string status;
        string formaPgto;
        static int qtdPedidos;

    public:
        ~Pedido();
        Pedido();

        float getValorTotal();
	    void setValorTotal(float valorTotal);
	    Date getData();
	    void setData(Date data);
	    string getStatus();
	    void setStatus(string status);
	    string getFormaPgto();
	    void setFormaPgto(string formaPgto);
	    int getQtdPedidos();
	    void setQtdPedidos(int qtdPedidos);
};
