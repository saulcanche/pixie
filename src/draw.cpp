#include "../include/draw.h"

bool is_valid(Image &img, Point p){ 
    if(p.y >= img.height || p.y < 0) return false;
    if(p.x >= img.width || p.x < 0) return false;
    return true;
}
void draw_rectangle(Image &img, Point p1, int w, int h, Color col){
}
void draw_circle(Image img, Point c, int radiu, Color col);
void draw_line_2P(Image img, Point p1, Point p2, Color col);
void draw_triangle(Image img, Point p1, Point p2, Point p3);