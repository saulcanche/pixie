#include "../include/draw.h"

bool is_valid(Image &img, Point p){ 
    //point is unsigned so no need to check if x > 0 or y > 0
    if(p.y >= img.height) return false;
    if(p.x >= img.width) return false;
    return true;
}
void draw_rectangle(Image &img, Point p1, size_t w, size_t h, Color col){
    if(!is_valid(img, p1)) return;
    if(!is_valid(img, {p1.x + w - 1, p1.y + h - 1})) return;
    for(size_t i = p1.y; i < p1.y+h; i++){
        for(size_t j = p1.x; j < p1.x + w; j++) set_pixel(img, i, j, col);
    }
}
/*
void draw_circle(Image img, Point c, int radiu, Color col){
    return;
}
void draw_line_2P(Image img, Point p1, Point p2, Color col){
    return;
}
void draw_triangle(Image img, Point p1, Point p2, Point p3){
    return;
} 
*/