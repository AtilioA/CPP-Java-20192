#include "Circulo.hpp"
#include "Forma2D.hpp"

Circulo::Circulo(double raio)
{
    this->setRaio(raio);
}

double Circulo::getRaio()
{
    return this->raio;
}

void Circulo::setRaio(double raio)
{
    this->raio = raio;
}
