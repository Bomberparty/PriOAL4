#include <functions.hpp>

std::string string_transform(std::string input) {
    std::string output;

    if(!(input == "")) {
        for(char elem: input) {
            if (elem != '*') {
                output.push_back(elem);
                output.push_back(elem);
            }
        } 
    }
    else {
        return input;
    }

    return output;
}