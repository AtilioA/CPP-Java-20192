#ifndef _QUADRADO_
#define _QUADRADO_
#include "Forma2D.hpp"

using namespace std;

class Quadrado: public Forma2D
{
    private:
        double lado;

    public:
        Quadrado(double lado);
        double getLado();
        void setLado(double lado);
};

#endif
