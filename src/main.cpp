#include "../include/image.h"
#include "../include/draw.h"

int main(){
    Image img = create_image(800, 600);
    fill_image(img, {255, 255, 255});
    draw_rectangle(img, {0, 0}, 799u/2, 599u/2, {255, 0, 0});
    draw_circle(img, {799u/2, 599u/2}, 100u, {0, 0, 0});
    save_ppm("output.ppm", img);
    return 0;
}