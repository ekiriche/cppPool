#include "Pony.hpp"
#include <iostream>

void ponyOnTheHeap() {
    Pony* ponyOnHeap = new Pony();
    delete ponyOnHeap;
}

void ponyOnTheStack() {
    Pony ponyOnStack = Pony();
}

int main() {
    std::cout << "Creating and killing new pony on heap!" << std::endl;
    ponyOnTheHeap();
    std::cout << "Creating and killing new pony on stack!" << std::endl;
    ponyOnTheStack();
    return 0;
}