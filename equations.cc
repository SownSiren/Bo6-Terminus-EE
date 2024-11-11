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


//C++ is picky with PEMDAS, so we have to split up the equation.
double equation2(){
    double total;

    total = 2 * z + y;

    total = total - 5;

    return total;
}


//C++ is picky with PEMDAS, so we have to split up the equation.
double equation3(){
    double total;

    total = y + z;

    total = total - x;

    return std::abs(total);
}