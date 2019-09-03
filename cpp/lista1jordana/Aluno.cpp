#include "Aluno.hpp"

Aluno::Aluno()
{
    this->matriculaInstituicao = "";
    this->codigo = -1;
    this->CPF = "";
    this->RG = "";
    this->endereco = "";
    this->telefone = "";
    this->email = "";
    this->nome = "";
    this->qtdAlunos++;
}

Aluno::~Aluno()
{
    cout << "Aluno CANCELADO" < endl;
}

void matricular(Turma t);

string Aluno::getMatriculaInstituicao()
{
    return this.matriculaInstituicao;
}

void Aluno::setMatriculaInstituicao(string matriculaInstituicao)
{
    this.matriculaInstituicao = matriculaInstituicao;
}

int Aluno::getCodigo()
{
    return this.codigo;
}

void Aluno::setCodigo(int codigo)
{
    this.codigo = codigo;
}

string Aluno::getCPF()
{
    return this.CPF;
}

void Aluno::setCPF(string CPF)
{
    this.CPF = CPF;
}

string Aluno::getRG()
{
    return this.RG;
}

void Aluno::setRG(string RG)
{
    this.RG = RG;
}

string Aluno::getEndereco()
{
    return this.endereco;
}

void Aluno::setEndereco(string endereco)
{
    this.endereco = endereco;
}

string Aluno::getTelefone()
{
    return this.telefone;
}

void Aluno::setTelefone(string telefone)
{
    this.telefone = telefone;
}

string Aluno::getEmail()
{
    return this.email;
}

void Aluno::setEmail(string email)
{
    this.email = email;
}

string Aluno::getNome()
{
    return this.nome;
}

void Aluno::setNome(string nome)
{
    this.nome = nome;
}

int Aluno::getQtdAlunos()
{
    return this.qtdAlunos;
}

void Aluno::setQtdAlunos(int qtdAlunos)
{
    this.qtdAlunos = qtdAlunos;
}
