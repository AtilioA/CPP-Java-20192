#include "Cubo.hpp"
#include "Forma3D.hpp"

Cubo::Cubo(double lado)
{
    this->setLado(lado);
}

double Cubo::getLado()
{
    return this->lado;
}

void Cubo::setLado(double lado)
{
    this->lado = lado;
}

double Cubo::calcularArea()
{
    return this->lado * this->lado * 6;
}

void Cubo::imprimirDados()
{
    cout << "CUBO:\n" << "LADO DO CUBO:\n" << this->lado << endl << "AREA DO SUPERFICIE DO CUBO:\n" << this->calcularArea() << endl << "VOLUME DO CUBO:\n" << this->calcularVolume() << endl;
}

double Cubo::calcularVolume()
{
    return this->lado * this->lado * this->lado;
}
