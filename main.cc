#include <iostream>
#include "equations.h"
#include "symbols.h"


int main(){

    std::string inputSymbol;

    // Ask user to set values for x, y, and z based on symbols
    std::cout << "Symbols: Circle, Diagonal Circles, Figure Eight,"
                  "Shaded T, X Lower Shade, X Upper Shade\n"; 
    std::cout << "Enter the symbol for x: ";
    std::cin >> inputSymbol;
    setSymbolValue(inputSymbol, "x"); // Sets x based on input

    std::cout << "Symbols: Circle, Diagonal Circles, Figure Eight,"
                  "Shaded T, X Lower Shade, X Upper Shade\n"; 
    std::cout << "Enter the symbol for y: ";
    std::cin >> inputSymbol;
    setSymbolValue(inputSymbol, ); // Sets y based on input

    std::cout << "Symbols: Circle, Diagonal Circles, Figure Eight,"
                  "Shaded T, X Lower Shade, X Upper Shade\n"; 
    std::cout << "Enter the symbol for z: ";
    std::cin >> inputSymbol;
    setSymbolValue(inputSymbol, ); // Sets z based on input


    // initilizes x, y and z
    // temporary for now
    setupSymbols();

    std::cout << "Equation 1 result: " << equation1() << std::endl;
    std::cout << "Equation 2 result: " << equation2() << std::endl;
    std::cout << "Equation 3 result: " << equation3() << std::endl;

    return 0;
}