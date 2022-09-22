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
    int counter = (width / 3);
    int counter2 = (height/ 3);
    int remainder = (width % 3);
    int remainder2 = (height % 3);
    int check;
    for (int i = 0; i < counter2; i++){
        if(i % 2 == 0){
            for (int j = 0; j < counter; j++){
                if(j % 2 == 0){
                    checkerboard3x3Shape += "***";
                }
                else{
                    checkerboard3x3Shape += "   ";

            }
            
            }
            for (int k = 0; k < remainder; k++){
                if(check == 1){
                checkerboard3x3Shape += "*";
                }
                else{
                    checkerboard3x3Shape += " ";
                }
            }
            checkerboard3x3Shape += "\n";
            
            for (int j = 0; j < counter; j++){
                if(j % 2 == 0){
                    checkerboard3x3Shape += "***";
                }
                else{
                    checkerboard3x3Shape += "   ";
                }
            }
            for (int k = 0; k < remainder; k++){
                if(check == 1){
                checkerboard3x3Shape += "*";
                }
                else{
                    checkerboard3x3Shape += " ";
                }
            }
            checkerboard3x3Shape += "\n";

            for (int j = 0; j < counter; j++){
                if(j % 2 == 0){
                    checkerboard3x3Shape += "***";
                }
                else{
                    checkerboard3x3Shape += "   ";
                }
            
            }
            for (int k = 0; k < remainder; k++){
                if(check == 1){
                checkerboard3x3Shape += "*";
                }
                else{
                    checkerboard3x3Shape += " ";
                }
            }
        check = 1;
        }
        else{
            for (int j = 0; j < counter; j++){
                if(j % 2 == 0){
                    checkerboard3x3Shape += "   ";
                }
                else{
                    checkerboard3x3Shape += "***";
                }
            }
            for (int k = 0; k < remainder; k++){
                if(check == 1){
                checkerboard3x3Shape += "*";
                }
                else{
                    checkerboard3x3Shape += " ";
                }
            }
            checkerboard3x3Shape += "\n";

            for (int j = 0; j < counter; j++){
                if(j % 2 == 0){
                    checkerboard3x3Shape += "   ";
                }
                else{
                    checkerboard3x3Shape += "***";
                }
            
            }
            for (int k = 0; k < remainder; k++){
                if(check == 1){
                checkerboard3x3Shape += "*";
                }
                else{
                    checkerboard3x3Shape += " ";
                }
            }
            checkerboard3x3Shape += "\n";

            for (int j = 0; j < counter; j++){
                if(j % 2 == 0){
                    checkerboard3x3Shape += "   ";
                }
                else{
                    checkerboard3x3Shape += "***";
                }
            }
            for (int k = 0; k < remainder; k++){
                if(check == 1){
                checkerboard3x3Shape += "*";
                }
                else{
                    checkerboard3x3Shape += " ";
                }
            }        
        check = 0;
        }
        checkerboard3x3Shape += "\n";
    }

    for (int i = 0; i < remainder2; i++){
        if(check == 0){
            for (int j = 0; j < counter; j++){//how many horizontally
                    if(j % 2 == 0){
                        checkerboard3x3Shape += "***";
                    }
                    else{
                        checkerboard3x3Shape += "   ";
                        }
                
            }
            for (int k = 0; k < remainder; k++){
                if(check == 1){
                checkerboard3x3Shape += "*";
                }
                else{
                    checkerboard3x3Shape += " ";
                }
            }
            checkerboard3x3Shape += "\n";
        }

        if(check == 1){
            for (int j = 0; j < counter; j++){//how many horizontally
                    if(j % 2 == 0){
                        checkerboard3x3Shape += "   ";
                    }
                    else{
                        checkerboard3x3Shape += "***";
                        }
                
            }
            for (int k = 0; k < remainder; k++){
                if(check == 1){
                checkerboard3x3Shape += "*";
                }
                else{
                    checkerboard3x3Shape += " ";
                }
            }
            checkerboard3x3Shape += "\n";
        }
    }
    return checkerboard3x3Shape;
}

            /*if(i % 2 == 0){
                if(remainder == 1){
                checkerboard3x3Shape += " ";
                }
                else if(remainder == 2){
                    checkerboard3x3Shape += " ";
                }
                else{
                    checkerboard3x3Shape += "";
                }
            }
            else{
                if(remainder == 1){
                checkerboard3x3Shape += "*";
                }
                else if(remainder == 2){
                    checkerboard3x3Shape += "**";
                }
                else{
                    checkerboard3x3Shape += "";
                }
            }*/