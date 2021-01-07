#include "Timefall.h"
#include <iostream>

int main() {
    std::cout << "Starting main..." << std::endl;

    ctf::Timefall Timefall;

    return 0;
}

namespace ctf
{
    Timefall::Timefall() {
        std::cout << "Starting Timefall..." << std::endl;
    }
}