#ifndef _CILINDRO_
#define _CILINDRO_
#include "Forma3D.hpp"

using namespace std;

class Cilindro: public Forma3D
{
    private:
        double raio;
        double altura;

    public:
        Cilindro(double raio, double altura);
        double getRaio();
        void setRaio(double raio);
        double getAltura();
        void setAltura(double altura);
};

#endif
