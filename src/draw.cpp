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
void draw_circle(Image &img, Point c, size_t radiu, Color col){
    if(!is_valid(img, c)) return;
    if(!is_valid(img, {c.x -1 + radiu, c.y + radiu - 1})) return;
    if(!is_valid(img, {c.x - radiu, c.y + radiu - 1})) return;
    for(size_t i = c.y - radiu; i < c.y + radiu; i++){
        for(size_t j = c.x - radiu; j < c.x + radiu; j++){
            long check = (j - c.x)*(j - c.x) + (i - c.y)*(i - c.y) - (long)radiu*radiu;
            if(check > 0) continue;
            set_pixel(img, i, j, col);
        }
    }
}
void draw_line(Image &img, Point p1, Point p2, Color col){
    int dx = abs((int)p2.x - (int)p1.x);
    int dy = abs((int)p2.y - (int)p1.y);
    int sx = (p1.x < p2.x) ? 1 : -1;
    int sy = (p1.y < p2.y) ? 1 : -1;
    int err = dx - dy;
    
    Point p = p1;
    while(true){
        if(!is_valid(img, p)) break;
        set_pixel(img, p.y, p.x, col);
        
        if(p.x == p2.x && p.y == p2.y) break;
        
        int e2 = 2 * err;
        if(e2 > -dy){
            err -= dy;
            p.x += sx;
        }
        if(e2 < dx){
            err += dx;
            p.y += sy;
        }
    }
}
void draw_triangle(Image &img, Point p1, Point p2, Point p3){
    return;
}