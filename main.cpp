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

    int length = 6;
    std::cout << "Input side length: " << length << std::endl;
    std::cout << "Shape: " << std::endl;
    std::cout << lower(length);
    std::cout << "\n";

    length = 5;
    std::cout << "Input side length: " << length << std::endl;
    std::cout << "Shape: " << std::endl;
    std::cout << upper(length);
    std::cout << "\n";

    std::cout << "Example 1:" << std::endl;
    width = 12;
    height = 5;
    std::cout << "Input width: " << width << std::endl;
    std::cout << "Input height: " << height << std::endl;
    std::cout << "Shape: " << std::endl;
    std::cout << trapezoid(width, height);
    std::cout << "\n";

    std::cout << "Example 2:" << std::endl;
    width = 12;
    height = 7;
    std::cout << "Input width: " << width << std::endl;
    std::cout << "Input height: " << height << std::endl;
    std::cout << "Shape: " << std::endl;
    std::cout << trapezoid(width, height);
    std::cout << "\n";

    std::cout << "Example 1:" << std::endl;
    width = 16;
    height = 11;
    std::cout << "Input width: " << width << std::endl;
    std::cout << "Input height: " << height << std::endl;
    std::cout << "Shape: " << std::endl;
    std::cout << checkerboard3x3(width, height);
    std::cout << "\n";

    std::cout << "Example 2:" << std::endl;
    width = 27;
    height = 27;
    std::cout << "Input width: " << width << std::endl;
    std::cout << "Input height: " << height << std::endl;
    std::cout << "Shape: " << std::endl;
    std::cout << checkerboard3x3(width, height);
    std::cout << "\n";
    

}