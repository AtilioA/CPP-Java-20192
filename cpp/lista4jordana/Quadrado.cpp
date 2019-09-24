#include "Quadrado.hpp"

Quadrado::Quadrado(double lado)
{
    this->setLado(lado);
}

double Quadrado::getLado()
{
    return this->lado;
}

void Quadrado::setLado(double lado)
{
    this->lado = lado;
}
