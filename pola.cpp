#include "pola.h"
#include <iostream>

using namespade std;

int poleProstokat(int a, int b)
{
    int pole;
    pole = a*b;
    return pole;
}

int poleProstopadloscian(int a, int b, int h)
{
    int pole;
    pole = 2*(a*b)+2*(a*h)+2*(b*h);
    return pole;
}
