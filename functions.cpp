#include "functions.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

std::string box(int width, int height) {
    std::string boxShape;
    for (int i = 0; i < height; i++){
        
        for (int j = 0; j < width; j++){
            boxShape += "*";
        }
        boxShape += "\n";
    }

    return boxShape;
}

std::string checkerboard(int width, int height) {
    std::string checkerboardShape;
    for (int i = 0; i < height; i++){
        if(i % 2 == 0){
            for (int j = 0; j < width; j++){
            if(j % 2 == 0){
                checkerboardShape += "*";
            }
            else{
                checkerboardShape += " ";
            }
            
            }
        }
        else {
            for (int j = 0; j < width; j++){
            if(j % 2 == 0){
                checkerboardShape += " ";
            }
            else{
                checkerboardShape += "*";
            }
            
            }
        }
        checkerboardShape += "\n";
    }

    return checkerboardShape;
}

std::string cross(int size) {
    std::string crossShape;
    for (int i = 0; i < size; i++){
        
        for (int j = 0; j < size/2; j++){
            crossShape += "*";
        }
        crossShape += "\n";
    }

    return crossShape;
}
