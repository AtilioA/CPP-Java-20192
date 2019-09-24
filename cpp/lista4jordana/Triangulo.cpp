#include "Triangulo.hpp"
#include "Forma2D.hpp"

Triangulo::Triangulo(double base, double altura)
{
    this->setBase(base);
    this->setAltura(altura);
}

double Triangulo::getBase()
{
    return this->base;
}

void Triangulo::setBase(double base)
{
    this->base = base;
}

double Triangulo::getAltura()
{
    return this->altura;
}

void Triangulo::setAltura(double altura)
{
    this->altura = altura;
}
