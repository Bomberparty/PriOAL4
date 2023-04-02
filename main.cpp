#include "iofunctions.cpp"
#include "functions.cpp"
#include "process.cpp"

int main(){
    bool repeatable = true;

    while(repeatable) {
        process(repeatable);

        std::string *ans =  new std::string;
        std::cout << "Do you wanna repeat process? [Y/n]: ";

        while(true) {        
            if(*ans == "Y" || *ans == "y") {
                break;
            } else if (*ans == "N" || *ans == "n") {
                repeatable = false;
                break;
            } else {
                std::cout << "Please, enter correct value." << std::endl;
                continue; 
            }
        }
    }
    return 0;
}