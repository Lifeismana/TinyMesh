#include <vector>

#include "mathematics.h"

#pragma once

class Disk
{
public:
    Disk(Vector Center, Vector Normal, float rayon);
protected:
    Vector c;
    Vector n;
    float r;

};

