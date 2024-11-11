#include <iostream>
#include <cstdlib> 
#include "equations.h"
#include "symbols.h"


int main(){

    std::string inputSymbol;

    // Ask user to set values for x, y, and z based on symbols
    std::cout << "Symbols:\n"
                  "1 = Circle, 2 = Diagonal Circles, 3 = Figure Eight,\n"
                  "4 = Shaded T, 5 = X / Shade, 6 = X \\ Shade\n"; 
    std::cout << "Enter the symbol for x: " << std::endl;
    std::cin >> inputSymbol;
    setSymbolValue(inputSymbol, "x"); // Sets x based on input

    std::cout << "Enter the symbol for y: " << std::endl;
    std::cin >> inputSymbol;
    setSymbolValue(inputSymbol, "y"); // Sets y based on input

    std::cout << "Enter the symbol for z: " << std::endl;
    std::cin >> inputSymbol;
    setSymbolValue(inputSymbol, "z"); // Sets z based on input


    // initilizes x, y and z
    // temporary for now
    setupSymbols();

    std::cout << "Equation 1 result: " << equation1() << std::endl;
    std::cout << "Equation 2 result: " << equation2() << std::endl;
    std::cout << "Equation 3 result: " << equation3() << std::endl;

    return 0;
}