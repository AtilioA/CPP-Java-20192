#include <iostream>

using namespace std;

class Pessoa
{
private:
    string CPF;
    string RG;
    string endereco;
    string telefone;
    string email;
    string nome;

public:
    Pessoa();
    ~Pessoa();

    string Pessoa::getCPF();
    void Pessoa::setCPF(string CPF);
    string Pessoa::getRG();
    void Pessoa::setRG(string RG);
    string Pessoa::getEndereco();
    void Pessoa::setEndereco(string endereco);
    string Pessoa::getTelefone();
    void Pessoa::setTelefone(string telefone);
    string Pessoa::getEmail();
    void Pessoa::setEmail(string email);
    string Pessoa::getNome();
    void Pessoa::setNome(string nome);
}
