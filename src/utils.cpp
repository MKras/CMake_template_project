#include "utils.h"
#include<iostream>

namespace utils {

    std::string reverse(std::string str){
        return std::string(str.rbegin(),str.rend());
    }

}
