#include <iostream>

int main(int argc, char** argv) {
    if (argc != 1) {
        std::cout << "Usage: " << argv[0] << std::endl;
        return 0;
    }

    std::cout << "Ultimate Sneed!" << std::endl;
    return 0; 
} 