#ifndef _ESFERA_
#define _ESFERA_
#include <cmath>
#include "Forma3D.hpp"

using namespace std;

class Esfera: public Forma3D
{
    private:
        double raio;

    public:
        Esfera(double raio);
        double getRaio();
        void setRaio(double raio);
        double calcularArea();
        void imprimirDados();
        double calcularVolume();
};

#endif
