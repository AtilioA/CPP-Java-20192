#ifndef _FORMA3D_
#define _FORMA3D_
#include "Forma.hpp"

using namespace std;

class Forma3D: Forma
{
    public:
        virtual double calcularVolume() = 0;
};

#endif
