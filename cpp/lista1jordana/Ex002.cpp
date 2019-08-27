#include <iostream>
#include "Ex002.hpp"

using namespace std;

class Turma
{
private:
    /* data */
public:
    Turma(/* args */);
    ~Turma();
};

Turma::Turma(/* args */)
{
}

Turma::~Turma()
{
}

class Professor
{
private:
    /* data */
public:
    Professor(/* args */);
    ~Professor();
};

Professor::Professor(/* args */)
{
}

Professor::~Professor()
{
}

class Matricula
{
private:
    /* data */
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
    /* data */
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
    /* data */
public:
    string matriculaInstituicao;
    int codigo;
    string CPF;
    string RG;
    string endereco;
    string telefone;
    string email;
    string nome;
    static int qtdAlunos;

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
    Aluno teste;
    teste.CPF = "1";
    cout << teste.CPF << endl;
    return 0;
}
