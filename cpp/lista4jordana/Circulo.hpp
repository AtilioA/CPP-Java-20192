#ifndef _CIRCULO_
#define _CIRCULO_
#include "Forma2D.hpp"

using namespace std;

class Circulo: public Forma2D
{
    private:
        double raio;

    public:
        Circulo(double raio);
        double getRaio();
        void setRaio(double raio);
};

#endif
