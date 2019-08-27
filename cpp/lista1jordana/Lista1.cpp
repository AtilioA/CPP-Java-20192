#include "Ex002.hpp"
#include <iostream>

using namespace std;


Professor::Professor(/* args */)
{
}

Professor::~Professor()
{
}

class Matricula
{
private:
    int codigo;
    // tm diaMatricula;
    nota int;
    string situacao;
public:
    Matricula(/* args */);
    ~Matricula();
};

Matricula::Matricula(/* args */)
{
}

Matricula::~Matricula()
{
}

class HorarioAula
{
private:

public:
    HorarioAula(/* args */);
    ~HorarioAula();
};

HorarioAula::HorarioAula(/* args */)
{
}

HorarioAula::~HorarioAula()
{
}


class Idioma
{
private:
    /* data */
public:
    string nome;
    int codigo;

    Idioma(/* args */);
    ~Idioma();
};

Idioma::Idioma(/* args */)
{
}

Idioma::~Idioma()
{
}

class Curso
{
private:
    /* data */
public:
    string nome;
    int codigo;

    Curso(/* args */);
    ~Curso();
};

Curso::Curso(/* args */)
{
}

Curso::~Curso()
{
}

class Serie
{
private:
    /* data */
public:
    string nome;
    int codigo;

    Serie(/* args */);
    ~Serie();
};

Serie::Serie(/* args */)
{
}

Serie::~Serie()
{
}

class Aluno
{
private:
    string matriculaInstituicao;
    int codigo;
    string CPF;
    string RG;
    string endereco;
    string telefone;
    string email;
    string nome;
    static int qtdAlunos;
public:

    Aluno(/* args */);
    ~Aluno();

    void matricular(Turma t)
    {

    }
};

Aluno::Aluno(/* args */)
{
}

Aluno::~Aluno()
{
}

int main()
{
    return 0;
}
