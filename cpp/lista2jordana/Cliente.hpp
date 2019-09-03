#include <iostream>

class Cliente
{
    private:
        string nome;
        Date dataNascimento;
        string RG;
        string CPF;
        string endereco;
        string telefone;
        string email;

    public:
        Cliente();
        ~Cliente();

        string getNome();
        void setNome(string nome);
        Date getDataNascimento();
        void setDataNascimento(Date dataNascimento);
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
