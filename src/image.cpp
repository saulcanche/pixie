#include "../include/image.h"
#include <fstream>
#include <iostream> 
Image create_image(int w, int h){
    Image img;
    img.width = w;
    img.height = h;
    img.pixels.resize(h);
    for(size_t i = 0; i < h; i++){
        img.pixels[i].resize(img.width);
    }
    return img;
}

void set_pixel(Image& img, int x, int y, Color col){
    img.pixels[y][x] = col;
}

void save_ppm(const std::string filename, Image& img){
    std::ofstream file(filename);
    file << "P3" << std::endl;
    file << img.width << " " << img.height << std::endl;
    file << "255" << std::endl;
    for(size_t i = 0; i < img.height; i++){
        for(size_t j = 0; j < img.width; j++){
            file << img.pixels[i][j].r << " "<< img.pixels[i][j].g << " " << img.pixels[i][j].b;
            file << " ";
        }
    }
    file.close();
}
