#ifndef __PROFESSOR__
#define __PROFESSOR__
#include <string>
#include <ctime>
#include <iostream>
#include "Professor.hpp"

class Professor
{
private:
    Date dataAdmissao;
    Date dataDemissao;
    string CPF;
    string RG;
    string endereco;
    string telefone;
    string email;
    string nome;
    static int qtdProfessores;

public:
    Date Professor::getDataAdmissao();
    void Professor::setDataAdmissao(Date dataAdmissao);
    Date Professor::getDataDemissao();
    void Professor::setDataDemissao(Date dataDemissao);
    string Professor::getCPF();
    void Professor::setCPF(string CPF);
    string Professor::getRG();
    void Professor::setRG(string RG);
    string Professor::getEndereco();
    void Professor::setEndereco(string endereco);
    string Professor::getTelefone();
    void Professor::setTelefone(string telefone);
    string Professor::getEmail();
    void Professor::setEmail(string email);
    string Professor::getNome();
    void Professor::setNome(string nome);
    int Professor::getQtdProfessores();
    void Professor::setQtdProfessores(int qtdProfessores);

    Professor()
    ~Professor();
};
