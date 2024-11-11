#include "symbols.h"
#include <iostream>
#include <string>

// Current values of x, y, and z, which can change dynamically
double x_value;
double y_value;
double z_value;

double getX(){

    return x_value; // test value
}

double getY(){

    return y_value; // test value
}

double getZ(){

    return z_value; // test value
}

void setSymbolValue(const std::string& symbol, const std::string& variable) {
    double value = 0.0;

    // Determine the value based on the symbol provided
    if (symbol == "6") {
        value = 22;
    } else if (symbol == "5") {
        value = 21;
    } else if (symbol == "4") {
        value = 20;
    } else if (symbol == "3") {
        value = 11;
    } else if (symbol == "2") {
        value = 10;
    } else if (symbol == "1") {
        value = 0;
    } else {
        std::cerr << "Unknown symbol: " << symbol << std::endl;
        return;
    }

    // Assign the value to the correct variable
    if (variable == "x") {
        x_value = value;
    } else if (variable == "y") {
        y_value = value;
    } else if (variable == "z") {
        z_value = value;
    } else {
        std::cerr << "Unknown variable: " << variable << std::endl;
    }
}