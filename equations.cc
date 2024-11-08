#include "equations.h"
#include "symbols.h"
#include <cmath>

double x;
double y;
double z;

void setupSymbols() {

    x = getX();
    y = getY();
    z = getZ();
}

double equation1(){
    return 2 * x + 11;
}

double equation2(){
    return (2 * z + y) - 5;
}

double equation3(){
    return std::abs(y + z) - x;
}