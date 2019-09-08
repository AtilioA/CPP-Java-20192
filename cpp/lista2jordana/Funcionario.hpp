#ifndef _FUNCIONARIO_
#define _FUNCIONARIO_
#include <iostream>
#include <string>
// #include <vector>
#include <ctime>

using namespace std;

class Funcionario
{
    private:
        string nome;
        tm dataNascimento;
        string RG;
        string CPF;
        string endereco;
        string telefone;
        string email;
        string matricula;

    public:
        Funcionario();
        ~Funcionario();

        string getMatricula();
        void setMatricula(string matricula);
        string getNome();
        void setNome(string nome);
        tm getDataNascimento();
        void setDataNascimento(tm dataNascimento);
        string getRG();
        void setRG(string RG);
        void setEmail(string email);
        string getEmail();
        void setTelefone(string telefone);
        string getTelefone();
        void setEndereco(string endereco);
        string getEndereco();
        void setCPF(string CPF);
        string getCPF();
};

#endif
