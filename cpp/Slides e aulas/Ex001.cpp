#include <vector>
#include <iostream>
#include <string>

class Pessoa
{
    public:
        std::string nome;
        std::string telefone;

        Pessoa(std::string nome, std::string telefone)
        {
            this->nome = nome;
            this->telefone = telefone;
            std::cout << "Pessoa inicializada com sucesso." << std::endl;
        }

        ~Pessoa()
        {
            std::cout << "Pessoa liberada com sucesso." << std::endl;
        }

        void imprime_pessoa()
        {
            std::cout << "Nome: " << this->nome << "\nTel: " << this->telefone << std::endl;
        }
        void imprime_nome()
        {
            std::cout << "Nome: " << this->nome << std::endl;
        }
        void imprime_telefone()
        {
            std::cout << "Tel: " << this->telefone << std::endl;
        }
};

int main()
{
    Pessoa *renan, *henriquelay, *tiophil;
    renan = new Pessoa("Renan", "27");
    henriquelay = new Pessoa("Henrique", "99850");
    tiophil = new Pessoa("Tio Phil", "0875");

    std::vector<Pessoa*> pessoas;
    pessoas.push_back(renan);
    pessoas.push_back(henriquelay);
    pessoas.push_back(tiophil);

    for (int i = 0; i < pessoas.size(); i++)
    {
        // std::cout << i << std::endl;
        pessoas[i]->imprime_pessoa();
        delete pessoas[i];
    }

    std::cout << "\nFim." << std::endl;

    return 0;
}
