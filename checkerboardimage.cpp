/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: Lab Quiz 9 
checkboard image
The output of the checkboard pattern, 
alternating between the image and black pixels.
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int img [MAX_H][MAX_W];
    int h, w;
    readImage(img, h, w);
    int out[MAX_H][MAX_W];
    for(int row = 0; row < h; row++) {
        for(int col = 0; col < w; col++){
        
            if((row+col) % 2 == 0)
                out[row][col] = 0;
            else
                out[row][col] = img[row][col];

        }
    }
    writeImage(out, h, w);
    return 0;
}