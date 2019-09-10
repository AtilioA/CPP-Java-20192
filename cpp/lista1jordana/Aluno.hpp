#include <iostream>
#include "Pessoa.hpp"

using namespace std;

class Aluno:Pessoa
{
private:
    string matriculaInstituicao;
    int codigo;
    static int qtdAlunos;

public:
    Aluno();
    ~Aluno();

    string Aluno::getMatriculaInstituicao();
    void Aluno::setMatriculaInstituicao(string matriculaInstituicao);
    int Aluno::getCodigo();
    void Aluno::setCodigo(int codigo);
    int Aluno::getQtdAlunos();
    void Aluno::setQtdAlunos(int qtdAlunos);

    void matricular(Turma t);
};
