#include "process.hpp"

bool process(bool repeatable) {
    std::string *ans = new std::string;
    std::string line;
    while(true) {
        std::cout << "Hello, dear user. Do you prefer console of file input? [file/console]: ";
        std::getline(std::cin, *ans);
        if (*ans == "file" ) {
            line = file_input();
            repeatable = false;
            break;
        }
        else if (*ans == "console") {
            line = console_input();
            break;
        }
        else
        {
            std::cout << std::endl;
            std::cout << "You've entered an incorrect answer. Please retry" << std::endl;
            continue;
        }
    }

    line = string_transform(line);
    while(true) {
        std::cout << "Dear user, it's time to choose the output method. Console or file [file/console]: ";
        std::getline(std::cin, *ans);
        if (*ans == "file" ) {
            file_output(line);
            delete ans;
            break;
        }
        else if (*ans == "console") {
            console_output(line);
            delete ans;
            break;
        }
        else
        {
            std::cout << std::endl;
            std::cout << "You've entered an incorrect answer. Please retry" << std::endl;
            continue;
        }
    }
    return repeatable;
}