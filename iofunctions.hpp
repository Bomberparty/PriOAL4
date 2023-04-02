#ifndef IOFUNCTIONS_HPP
#define IOFUNCTIONS_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <stdexcept>

std::string console_input();

std::string file_input();

void file_output(std::string line);

void console_output(std::string line);

#endif