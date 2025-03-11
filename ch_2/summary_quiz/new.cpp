#include "io.h"
#include <iostream>

int readNumber(){
    int output {};
    std::cout << "Enter a value: " << std::endl;
    std::cin >> output;

    return output;
}

void writeAnswer(int value){
    std::cout << "Your final value is: " << value << std::endl;
}
