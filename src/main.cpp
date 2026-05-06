#include "../include/image.h"

int main(){
    Image img = create_image(800, 600);
    fill_image(img, {255, 255, 255});
    save_ppm("output.ppm", img);
    return 0;
}