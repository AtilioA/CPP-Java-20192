#include <iostream>
#include <vector>
#include <string>
#include "Pessoa.hpp"

using namespace std;

int main()
{
    cout << "leakando brabamente" << endl;
    Pessoa *pessoa;
    tm nasci;

    nasci.tm_year = 1900 + 118;
    nasci.tm_mon = 10;
    nasci.tm_mday = 0;

    pessoa = new Pessoa("Renan", nasci, "12345678900", "12345123");

    cout << pessoa->getDataNasc().tm_mon << endl;

    delete pessoa;

    return 0;
}
