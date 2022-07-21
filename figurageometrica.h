#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "scultor.h"

class FiguraGeometrica
{
protected:
    float r,g,b,a;
public:
    virtual void draw(Scultor &t)=0;
    virtual ~FiguraGeometrica(){};
};

#endif
