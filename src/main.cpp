#include <iostream>
#include <sstream>
#include <vector>

#include "utils.h"

int main(int argc, char **argv) {

    std::cout << std::string("Hello World!") << std::endl;
    std::cout << utils::reverse(std::string("Hello World!")) << std::endl;
   
};
