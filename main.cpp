#include <cstdlib>
#include <iostream>
#include "calculatrice.cpp"

using namespace std;

int main(int argc, char** argv)
{
    Calculatrice c;
    c.init();
    c.entrer(5);
    c.mult();
    c.entrer(5);
    c.egal();
    c.courant();
    std::cout << c.courant() << std::endl;
            
    return 0;
}

