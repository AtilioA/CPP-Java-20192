#ifndef _TRIANGULO_
#define _TRIANGULO_
#include "Forma2D.hpp"

using namespace std;

class Triangulo: public Forma2D
{
    private:
        double base;
        double altura;

    public:
        Triangulo(double base, double altura);
        double getBase();
        void setBase(double base);
        double getAltura();
        void setAltura(double altura);
};

#endif
