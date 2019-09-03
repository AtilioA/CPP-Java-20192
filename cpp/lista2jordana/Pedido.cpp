float Pedido::getValorTotal()
{
    return this.valorTotal;
}

void Pedido::setValorTotal(float valorTotal)
{
    this.valorTotal = valorTotal;
}

Date Pedido::getData()
{
    return this.data;
}

void Pedido::setData(Date data)
{
    this.data = data;
}

string Pedido::getStatus()
{
    return this.status;
}

void Pedido::setStatus(string status)
{
    this.status = status;
}

string Pedido::getFormaPgto()
{
    return this.formaPgto;
}

void Pedido::setFormaPgto(string formaPgto)
{
    this.formaPgto = formaPgto;
}

int Pedido::getQtdPedidos()
{
    return this.qtdPedidos;
}

void Pedido::setQtdPedidos(int qtdPedidos)
{
    this.qtdPedidos = qtdPedidos;
}
