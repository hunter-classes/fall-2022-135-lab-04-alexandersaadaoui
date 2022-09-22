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
        
        for (int j = 0; j < size; j++){
            if(i == j || i == (size - (j + 1))){
                crossShape += "*";
            }
            else{
              crossShape += " ";  
            }
        }
        crossShape += "\n";
    }

    return crossShape;
}

std::string lower(int length) {
    std::string lowerShape;
    for (int i = 0; i < length; i++){
        
        for (int j = 0; j < length; j++){
            if(i == j || i >= j){
                lowerShape += "*";
            }
            else{
              lowerShape += " ";  
            }
        }
        lowerShape += "\n";
    }

    return lowerShape;
}

std::string upper(int length) {
    std::string upperShape;
    for (int i = 0; i < length; i++){
        
        for (int j = 0; j < length; j++){
            if(i == j || j >= i){
                upperShape += "*";
            }
            else{
              upperShape += " ";  
            }
        }
        upperShape += "\n";
    }

    return upperShape;
}

std::string trapezoid(int width, int height) {
    std::string trapezoidShape;
    if(height <= (width / 2)){
        for (int i = 0; i < height; i++){
            
            for (int j = 0; j < width; j++){
                if(i == j || i == (width - (j + 1)) || (j > i && i < (width - j))){
                    trapezoidShape += "*";
                }
                else{
                trapezoidShape += " ";  
                }
            }
            trapezoidShape += "\n";
        }
    }
    else{
        trapezoidShape = "Impossible shape!\n";
    }
    return trapezoidShape;
}


std::string checkerboard3x3(int width, int height) {
    std::string checkerboard3x3Shape;
    //int check = 3;
    for (int i = 0; i < height; i++){
        if(i % 2 == 0){ //if i is equal to version of 3
            for (int j = 0; j < width; j++){
            if(j % 2 == 0){
                checkerboard3x3Shape += "***";
            }
            else{
                checkerboard3x3Shape += "   ";
            }
            
            }
        }
        else {
            for (int j = 0; j < width; j++){
            if(j % 2 == 0){
                checkerboard3x3Shape += "   ";
            }
            else{
                checkerboard3x3Shape += "***";
            }
            
            }
        }
        checkerboard3x3Shape += "\n";
    }

    return checkerboard3x3Shape;
}