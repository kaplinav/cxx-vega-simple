
#include <iostream>
#include <cstdlib>
#include "my_sum.h"

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