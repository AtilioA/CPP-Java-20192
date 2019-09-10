#include "Aluno.hpp"
#include "Turma.hpp"

Aluno::Aluno()
{
    this->matriculaInstituicao = "";
    this->codigo = -1;
    this->setCPF("");
    this->setRG("");
    this->setEndereco("");
    this->setTelefone("");
    this->setEmail("");
    this->setNome("");
    this->qtdAlunos++;
}

Aluno::~Aluno()
{
    this->qtdAlunos--;
    cout << "Aluno CANCELADO" << endl;
}

void matricular(Turma t);

string Aluno::getMatriculaInstituicao()
{
    return this->matriculaInstituicao;
}

void Aluno::setMatriculaInstituicao(string matriculaInstituicao)
{
    this->matriculaInstituicao = matriculaInstituicao;
}

int Aluno::getCodigo()
{
    return this->codigo;
}

void Aluno::setCodigo(int codigo)
{
    this->codigo = codigo;
}

int Aluno::getQtdAlunos()
{
    return this->qtdAlunos;
}

void Aluno::setQtdAlunos(int qtdAlunos)
{
    this->qtdAlunos = qtdAlunos;
}
