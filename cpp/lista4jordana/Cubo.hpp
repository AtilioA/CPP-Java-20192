#ifndef _CUBO_
#define _CUBO_
#include "Forma3D.hpp"
#include <cmath>

using namespace std;

class Cubo: public Forma3D
{
    private:
        double lado;

    double getLado() {
        return lado;
    }

    public:
        Cubo(double lado);
        double getLado();
        void setLado(double lado);
        double calcularArea();
        void imprimirDados();
        double calcularVolume();
};

#endif
