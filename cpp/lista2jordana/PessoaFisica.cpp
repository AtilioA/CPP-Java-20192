#include "PessoaFisica.hpp"

PessoaFisica::PessoaFisica(string nome, string RG, string CPF, string end, string tel, string email)
{
    this->setNome(nome);
    this->setRG(RG);
    this->setCPF(CPF);
    this->setEndereco(end);
    this->setTelefone(tel);
    this->setEmail(email);
}
