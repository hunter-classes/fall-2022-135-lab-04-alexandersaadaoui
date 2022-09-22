// add your code as appropriate 
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "functions.h"

int main()
{
    int width = 7;
    int height = 4;
    std::cout << "Input width: " << width << std::endl;
    std::cout << "Input height: " << height << std::endl;
    std::cout << "Shape: " << std::endl;
    std::cout << box(width, height);
    std::cout << "\n";

    width = 11;
    height = 6;
    std::cout << "Input width: " << width << std::endl;
    std::cout << "Input height: " << height << std::endl;
    std::cout << "Shape: " << std::endl;
    std::cout << checkerboard(width, height);
    std::cout << "\n";

    int size = 8;
    std::cout << "Input size: " << size << std::endl;
    std::cout << "Shape: " << std::endl;
    std::cout << cross(size);
    std::cout << "\n";


    

}