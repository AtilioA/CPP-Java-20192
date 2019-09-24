#include "Esfera.hpp"

Esfera::Esfera(double raio)
{
    this->setRaio(raio);
}

double Esfera::getRaio()
{
    return this->raio;
}

void Esfera::setRaio(double raio)
{
    this->raio = raio;
}

double Esfera::calcularArea()
{
    return 4 * (M_PI) * (this->raio * this->raio);
}

void Esfera::imprimirDados()
{
    cout << "ESFERA:\n" << "RAIO DA ESFERA:\n" << this->raio << endl << "AREA DA SUPERFICIE DA ESFERA:\n" << this->calcularArea() << endl << "VOLUME DA ESFERA:\n" << this->calcularVolume() << endl;
}

double Esfera::calcularVolume()
{
    return (4.0/3.0) * (M_PI) * (this->raio * this->raio * this->raio);
}
