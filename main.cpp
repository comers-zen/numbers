// main.cpp
#include <iostream>
#include "functions.h"

int main() {
    std::cout << "Hello from main.cpp!" << std::endl;
    
    // Call a function from functions.cpp
    int result = addNumbers(5, 7);
    
    std::cout << "Result of adding numbers: " << result << std::endl;

    return 0;
}
