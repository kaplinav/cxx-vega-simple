
#include <iostream>
#include <cstdlib>
#include "my_sum.h"

/*! \mainpage CXX Vega Simple Project Index Page
 *
 * \section intro_sec Introduction
 *
 * This is the introduction.
 *
 * \section install_sec Installation
 *
 * \subsection step1 Step 1: Opening the box
 *
 * etc...
 */

/**
 * @brief Entry point
 *
 * Execution of the program
 * starts here.
 *
 * @param argc Number of arguments
 * @param argv List of arguments
 *
 * @return Program exit status
 */
int main(int argc, char *argv[]) {
    if (argc != 3) {
        std::cerr << argv[0] << ": exactly two operands expected" << std::endl;
        std::cerr << "Usage '" << argv[0] << " operand_1 operand_2'" << std::endl;
        return 1;
    }

    int a = std::atoi(argv[1]);
    int b = std::atoi(argv[2]);
    std::cout << my_sum(a, b) << '\n';
    return 0;
}