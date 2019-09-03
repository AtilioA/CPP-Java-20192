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
    Aluno();
    ~Aluno();

    string Aluno::getMatriculaInstituicao();
    void Aluno::setMatriculaInstituicao(string matriculaInstituicao);
    int Aluno::getCodigo();
    void Aluno::setCodigo(int codigo);
    string Aluno::getCPF();
    void Aluno::setCPF(string CPF);
    string Aluno::getRG();
    void Aluno::setRG(string RG);
    string Aluno::getEndereco();
    void Aluno::setEndereco(string endereco);
    string Aluno::getTelefone();
    void Aluno::setTelefone(string telefone);
    string Aluno::getEmail();
    void Aluno::setEmail(string email);
    string Aluno::getNome();
    void Aluno::setNome(string nome);
    int Aluno::getQtdAlunos();
    void Aluno::setQtdAlunos(int qtdAlunos);

    void matricular(Turma t);
};
