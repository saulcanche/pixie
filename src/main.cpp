#include "../include/image.h"

int main(){
    Image img = create_image(800, 600);
    for(size_t y = 0; y < img.height; y++){
        for(size_t x = 0; x < img.width; x++){
            set_pixel(img, x, y, {255, 0, 0});
        }
    }
    save_ppm("output.ppm", img);
    return 0;
}