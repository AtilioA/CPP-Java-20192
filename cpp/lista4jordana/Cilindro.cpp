#include "Cilindro.hpp"
#include "Forma3D.hpp"

Cilindro::Cilindro(double raio, double altura)
{
    this->setRaio(raio);
    this->setAltura(altura);
}

double Cilindro::getRaio()
{
    return this->raio;
}

void Cilindro::setRaio(double raio)
{
    this->raio = raio;
}

double Cilindro::getAltura()
{
    return this->altura;
}

void Cilindro::setAltura(double altura)
{
    this->altura = altura;
}
