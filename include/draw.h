#ifndef DRAW_H
#define DRAW_H
#include <vector>
#include "image.h"

struct Point{
    size_t x, y;
};

bool is_valid(Image &img, Point p);
void draw_rectangle(Image &img, Point p1, size_t w, size_t h, Color col);
void draw_circle(Image &img, Point c, size_t radiu, Color col);
void draw_line_2P(Image &img, Point p1, Point p2, Color col);
void draw_triangle(Image &img, Point p1, Point p2, Point p3);
#endif