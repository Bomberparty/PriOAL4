#include <iofunctions.hpp>
#include <constants.hpp>

std::string console_input() {
    std::string input;
    std::cout << "Введите произвольную строку: ";
    std::getline(std::cin, input);

    return input;
}

std::string file_input() {

    bool valid_file = false;
    std::string line;

    while(!valid_file) {
        std::cout << "Enter the input file name [/input.txt]: ";
        std::string filename;
        std::getline(std::cin, filename);
        if (filename == "") {
            filename = constants::DEFAULT_PATH_TO_INPUT;
        }

        std::ifstream input_file(filename);
        if (!input_file) {
            throw std::runtime_error("Cannot open the file in specified folder.\n Verify its integrity and retry.");
        }
        else {
            std::getline(input_file, line);
            valid_file = true;
        }

    }

    return line;
}

void file_output(std::string line) {

    while(true) {
        std::cout << "Enter the input file name [/output.txt]: ";
        std::string filename;
        std::getline(std::cin, filename);
        if (filename == "") {
            filename = constants::DEFAULT_PATH_TO_OUTPUT;
        }

        std::ofstream output_file(filename);
        if (!output_file) {
            throw std::runtime_error("Cannot open the file in specified folder.\n Verify its integrity or launch as SU(Administrator) and retry.");
            continue;
        }
        else {
            output_file << line;
            break;
        }
    }
}

void console_output(std::string line) {
    std::cout << line << std::endl;
    std::cout << "This is the final variant of the line" << std::endl;
}